#include<iostream>
using namespace std;

// Hybrid Inheritance 
class Animal{
    public:
    string name;
    int height;
    int weight;

    public:
    void eating(){
        cout<<"eating the grass..."<<endl;
    }
    void setName(string n){
        this->name = n;
    }
};
class D{
    public:
    string danger;
};
class Dog: public Animal{
    public:
    string color;
    int leg;

    void bark(){
        cout<<"dog is barking..."<<endl;
    }
};

class Tiger: public Animal, public D{
    public:
    string fav_eating_animal;
    
};

int main(){
    Tiger t;
    t.setName("mohan");
    cout<<t.name<<endl;

    // cout<<t.setName()<<endl;
    cout<<t.height<<endl;
    cout<<t.weight<<endl;
    cout<<t.fav_eating_animal<<endl;
    cout<<t.danger<<endl;
    t.eating();
}