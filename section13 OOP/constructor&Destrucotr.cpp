#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{

    private:
    string name;
    int health;
    int xp;

    public:
    //** overloaded constructors 
    Player();
    Player(string name);
    Player(string name,int health,int xp);
    
    //*initilisor list
    Player::Player():name{"none"},health{0},xp{0}{};
    Player::Player(string name_val):name{name_val},health{0},xp{0}{};
    Player::Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{};
    //*order in initilisor list dosent matter, it will depend on how we declared method

    ~Player(); //** destructor
    //**called when object goes out of scope or we delete pointer to object
    //destructor called
};  

int main(){
    Player slayer;
    Player jeetu{"Jeetu",100,7};
    Player hero{"Hero"};
    Player villain{"Villain"};
    //* 4 objects created
    Player *enemy=new Player("Enemy");
    delete enemy; //*destructor called
    //* destructor order enemy, villain,hero,jeetu,slayer(reverse)

    

    // if we create a contructor that takes args, default contructor will no longer be created automatically
    // 

    return 0;
}