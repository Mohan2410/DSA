#include<iostream>
using namespace std;

void evenOdd(int n){
  if(n%2==0){
    cout<<"The enter number is even number...";
  }
  else{
    cout<<"The enter number is Odd number...";
  }
}

int main(){
  evenOdd(10);
  evenOdd(7);
}