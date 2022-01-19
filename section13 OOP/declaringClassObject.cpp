#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
public: //by default its private
    // attributes
    string name;
    int health;
    int xp;
    // methods
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;};
    bool is_dead();
};


int main(){

    //class ClassName(){}:capitalize class name
    //class Player{
        // attributes (vars) int health
    //   mmethods(functions) void talk(string){}   };
    // Player jeetu; Player *enemy=new Player(); :pointer to a object: delete enemy;

    // Player players[]{jeetu,vivek};array of objects of Player class
    // if we declare class in main , only main and funcs inside it will have access to it
    // Player jeetu;
    // Player hero;

    // Player *enemy{nullptr};
    // enemy=new Player;
    // delete enemy;

    // vector<Player> player_vec{jeetu};
    // player_vec.push_back(hero); 

    // **Accessong class members***
    // 1) . operator 2)-> member of pointer operator

    Player jeetu;  //Player is data type jeetu is variable name like int scores
    jeetu.name="Jeetu";
    jeetu.health=100;
    jeetu.xp=12;
    // cout<<jeetu.xp<<endl;
    jeetu.talk("Welcome to the valley");

    Player *enemy=new Player; //enemy is pointer and created in heap at run time
    (*enemy).name="Enemy";//*** have to use () coz . have higher precendence than *
    // ** first we derefrence it since its a ptr then we set its attributes
    //** this is dot method and we must use () coz of precedence of . is higher than *
   
    enemy->xp=15; //** arrow operator ,it derefrences the pointer and then applies attributes
    enemy->talk("I am not your enemy, I am THE enemy.");
    // cout<<(*enemy).xp<<endl;
    // cout<<enemy->xp<<endl;


    
    return 0;

}
