#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int id;
    string job;

    void doing(){
        cout<<"Employee is working";
    }
};
class JuniorEmp: public Employee{
    string j_emp_dept;

};
class Intern: public JuniorEmp{
    public:
    int duration;
};
int main(){

    Intern a;
    cout<<a.name<<endl;
    cout<<a.id<<endl;
    a.job;
    a.doing();
    a.duration;
}