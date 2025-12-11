#include<iostream>
using namespace std;
class OverLoading{
    private:
        int F,I;
    public:
        OverLoading(){
            F = 0;
            I = 0;
        }

        OverLoading(int f){
            F = f;
            I = 0;
        }

        OverLoading(int f,int i){
            F = f;
            I = i;
        }

        void showData(){
            cout<<F<<" Feet"<<I<<" Inches"<<endl;
        }
};
int main(){
    OverLoading a;
    a.showData();

    OverLoading b(5);
    b.showData();

    OverLoading c(5,2);
    c.showData();
}