#include<iostream>
using namespace std;
class Human{
    public:  
        int height;
        int weight;
        int age;
    
    public:
        int getWeight(){
            return this->weight;
        }

        void setHeight(int h){
            this->height = h;
        }

        int setWeight(int w){
            return this->weight=w;
        }
};
class Male: public Human{
    public:
        string color;
    
    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

    void setColor(string c){
         this->color = c;
    }
};
int main(){
    Male m;
    m.setHeight(90);
    m.setWeight(44);
    m.setColor("Black");

    cout<<m.height<<endl;
    cout<<m.weight<<endl;
    cout<<m.color<<endl;

    m.sleep();

    return 0;

}