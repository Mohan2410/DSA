#include<iostream>
using namespace std;
void checkevenodd(int n){

    if(n%2==2){
        cout<<"Even number...";
    }
    else{
        cout<<"Odd number...";
    }
}

int main()
{
    checkevenodd(24);
}