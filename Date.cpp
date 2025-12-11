#include<iostream>
using namespace std;
class Date{
    private:
    int D,M,Y;

    public:
    void setData(int d,int m,int y){
        D = d;
        M = m;
        Y = y;
    }
    void showData(){
        cout<<D<<"/"<<M<<"/"<<Y<<endl;
    }
};
int main(){
    Date d;
    d.setData(24,10,2003);
    d.showData();
}