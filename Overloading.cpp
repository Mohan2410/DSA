#include<iostream>
using namespace std;
class Addition{
    public: 
    int add(int num1,int num2){
        return num1+num2;
    }

    int add(int num1,int num2,int num3){
        return num1+num2+num3;
    }
};
int main(){
    Addition a;

    cout<<a.add(10,3)<<endl;
    cout<<a.add(1,2,3)<<endl;
}