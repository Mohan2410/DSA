#include<iostream>
using namespace std;
class Animal{
    public:
    int height;
    int weight;

    public:
    void bark(){
        cout<<"barking..."<<endl;
    }
};
class Human{
    public:
    string color;
    
    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
};

//Multiple Inheritance
class Combine: public Animal, public Human{

};
int main(){
    Combine c;
    c.bark();
    c.speak();
}