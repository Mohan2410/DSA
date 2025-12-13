// Overriding means same function same,same argument, and rely on inheritance

#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog{
    public:
    void speak(){
        cout<<"barking........"<<endl;
    }
};
int main(){
    Dog obj;
    obj.speak();

    Animal a;
    a.speak();
}