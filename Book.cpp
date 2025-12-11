#include<iostream>
// #include<string.h>
using namespace std;
class Book{
    private:
    string BN;
    string AN;
    int Price;

    public:
    void setData(string bn,string an,int P){
        BN = bn;
        AN = an;
        Price = P;
    }

    void showData(){
        cout<<"Book name is: "<<BN<<endl;
        cout<<"Author name is: "<<AN<<endl;
        cout<<"Price of book is: "<<Price<<endl;
    }
};
int main(){
    Book b;
    b.setData("Balbharti","Rabindranath Tagore",250);
    b.showData();
}