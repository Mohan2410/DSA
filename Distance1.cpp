#include<iostream>
using namespace std;
class Distance1{
    private:
    int F,I;

    public:
    void setData(int f,int i){
        F = f;
        I = i;
    }
    
    void setData(int f){
        F = f;
        I = 0;
    }

    void showData(){
        cout<<"Feet is: "<<F<< I<<" is Inches"<<endl;
    }

    int convert(){
        return(F*12+I);
    }
};
int main(){
    Distance1 d;
    d.setData(5,2);
    d.showData();
    int x = d.convert();
    cout<<"The data of the object is:"<<x<<" inches"<<endl;

    Distance1 e;
    e.setData(5);
    e.showData();
    int y = e.convert();
    cout<<"The data of the object is:"<<y<<" inches"<<endl;
}