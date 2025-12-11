#include<iostream>
using namespace std;
class Time{
    private:
    int H;
    int M;

    public:
    void setData(int h, int m){
        H = h;
        M = m;
    }
    void showData(){
        cout<<H<< "Hour"<<M<<"Minutes"<<endl;
    }
    int convert(){
        return(H*60+M);
    }
};
int main(){
    Time a;
    a.setData(4,22);
    a.showData();
    int z = a.convert();
    cout<<"Data of Time object is: "<<z<<"minutes"<<endl;
}