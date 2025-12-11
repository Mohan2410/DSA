#include<iostream>
using namespace std;
class Student{
    private:
    int RN;
    string Name;
    string Dept;

    public:
        Student(int rn,string name,string dept){
            RN = rn;
            Name = name;
            Dept = dept;
        }

    void showData(){
        cout<<"Roll no is: "<<RN<<endl;
        cout<<"Name is: "<<Name<<endl;
        cout<<"Dept is: "<<Dept<<endl;
    }
};
int main(){
    Student s = Student(1010,"Mohan","CSE");
    s.showData();

    Student s2 = Student(1020,"Om","IT");
    s2.showData();
}