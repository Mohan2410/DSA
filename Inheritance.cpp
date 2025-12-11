#include<iostream>
using namespace std;
class Human{
    public:
        int height;
        int weight;
        int age;
    
    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
        }
};
class Male: protected Human{
    public:
        string color;

        void sleep(){
            cout<<"Male is sleeping..."<<endl;
        }

        void setColor(string c){
            this->color = c;
        }
        int getHeight(){
            return this->height;
        }
        void setHeight(int h){
            this->height = h;
        }
    
};
int main(){
    Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.height<<endl;

    // cout<<object1.color<<endl;
    // object1.setWeight(45);
    // cout<<object1.weight<<endl;
    // object1.sleep();

    /*
    if we wat to remove the comment and need to use the above commented code then we
    should need to remove the protected access specifier in the derived class as a modifier
    */
    object1.setColor("black");
    cout<<"color is: "<<object1.color<<endl;

    object1.setHeight(999);
    cout<<object1.getHeight()<<endl;
}