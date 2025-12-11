#include<iostream>
using namespace std;
class Distance{
    private:
    int Feet,Inches;

    public:
    void setData(int F,int I){
        Feet = F;
        Inches = I;
    }
    void showData(){
        cout<<"Feet is:"<<Feet<<" Inches is:"<<Inches<<endl;
    }

    int convert(){
        return(Feet*12+Inches);
    }
    
};
int main(){
    Distance a;
    a.setData(5,2);
    a.showData();
    int z = a.convert();
    cout<<"Data of Distance object is: "<<z<<"inches"<<endl;
}