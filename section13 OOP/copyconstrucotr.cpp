#include<iostream>
#include<string>
#include<vector>

using namespace std;


// if wee pass object as value then we use a copy
// so objects must create new object which is copied from original obejct
//if we dont provide our copy consstructor c++ compiler generates its own

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    string get_name(){return name;};
    int get_health(){return health;};
    int get_xp(){return xp;};
    Player(string name_val="None", int health_val=0, int xp_val=0);
    //*copy constructor prototype
    Player(const Player &source);//by refrence 
    //destructor
    ~Player(){cout<<"Destructor called for "<<name<<endl;};
};

Player::Player(string name_val, int health_val, int xp_val):name(name_val),health{health_val},xp{xp_val}{
    cout<<"Three args constructor for "+ name<<endl;
};

Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}{
    cout<<"Copy constructor made copy of "<<source.name<<endl;
};

void display_player(Player p){
    //makes copy
    cout<<"Name "<<p.get_name()<<endl;
    cout<<"Health "<<p.get_health()<<endl;
    cout<<"Xp "<<p.get_xp()<<endl;
}

int main(){
    Player empty;
    display_player(empty);
    Player jeetu{"Jeetu"}; //rest all vals set to default from line 22
    Player hero{"Hero",100}; //rest all vals set to default from line 22
    Player villain{"Villain", 100,55};
    display_player(villain);
    return 0;
}