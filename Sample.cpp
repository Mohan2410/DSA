#include<iostream>
#include<string.h>
using namespace std;
class Person{
    private: 
    char name[20];
    int age;

    public: 
    void setData(char n[], int a){
        strcpy(name,n);
        age = a;
    }
    void showData(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};
int main(){
    Person a;
    a.setData("Ram",22);
    a.showData();

    Person b;
    b.setData("Om",20);
    b.showData();
}