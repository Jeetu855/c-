#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    private:
    // attributes
    string name{"Player"};
    int health;
    int xp;

    public:
    // methods
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}; //** inline declaration of methods
    bool is_dead();
};

int main(){
    // 1)Public ,2)Private ,3)Protected
    
    // 1)Public: accessible everywhere ,
    // 2)Private:accesible only my members of same class or friends of class:private is default vlaue
    // 3)Protected:used with inheritance

    Player jeetu;
    //jeetu.name="Jeetu"; //*error since name is private
    // cout<<jeetu.health<<endl;//*error since health is private

    jeetu.talk("Hello");
    return 0; 
}