#include<iostream>
using namespace std;
class Animal{
    public:
    int height;
    int weight;

    void speak(){
        cout<<"speking.."<<endl;
    }


};
class Dog: public Animal{
    public:
    string color;

    void setColor(string c){
        this->color = c;
    }

    
};
int main(){
    Animal a;
    cout<<a.height<<endl;
    cout<<a.weight<<endl;


    Dog d;
    cout<<a.height<<endl;
    cout<<a.weight<<endl;

    d.setColor("Yellow");
    cout<<d.color<<endl;
    d.speak();

}