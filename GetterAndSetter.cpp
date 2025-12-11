#include<iostream>
using namespace std;
class Hero{
    private:
        int health;

    public:
        char level;

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    int setHealth(int h){
        health = h;
    }

    int setLevel(char ch){
        level = ch;
    }
};
int main(){
    Hero Ramesh;
    Ramesh.setHealth(90);
    cout<<"Health of Ramesh is: "<<Ramesh.getHealth()<<endl;

    //static allocation
    Hero a;
    a.setHealth(55);
    a.setLevel('B');
    cout<<"Level is: "<<a.level<<endl;
    cout<<"Health is: "<<a.getHealth()<<endl;

    // dynamic allocation 
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('D');
    cout<<"Level is: "<<(*b).level<<endl;
    cout<<"Health is: "<<(*b).getHealth()<<endl;

    
}