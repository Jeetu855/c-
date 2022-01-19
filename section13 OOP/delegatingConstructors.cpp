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
    
    // Player();
    Player(string name);
    Player(string name,int health,int xp);

    // *default construtor paramters
    Player(string name_val="none",int health_val=0,int xp_val=0); //default constuctor with 3 args
    
   

    // delegating constructor
    Player::Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{}; //initialisor for default 3 args constructor
    //the above one is the delegating constructor

    Player::Player():Player{"None",0,0}{}; //no args constructor calls 3 arg contructor(Player after :)
    Player::Player(string name_val):Player{name_val,0,0}{}; // 1 arg construcotr calls 3 arg constructor

    ~Player(); //** destructor
    //**called when object goes out of scope or we delete pointer to object
    //destructor called

};  


int main(){


    return 0;
}