#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum = 0;

    for(int i=0;i<=10;i++){
        sum = sum+ (n*i);
    }

    cout<<"Sum: "<<sum;
}