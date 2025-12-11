#include<iostream>
using namespace std;
class Distance{
    private:
    int F,I;

    public:
    void setData(int f,int i = 2){
        F = f;
        I = i;
    }
    void showData(){
        cout<<F<<" Feet"<<I<<" Inches"<<endl;
    }

    int convert(){
        return(F*12+I);
    }
};
int main(){
    Distance d;
    d.setData(5,4);;
    d.showData();
    int x = d.convert();
    cout<<"The data of the object is: "<<x<<" inches";

    Distance e;
    e.setData(5);
    e.showData();
    int y = e.convert();
    cout<<"The data of the object is: "<<y<<" inches"<<endl;

}