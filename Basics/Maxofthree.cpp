#include<iostream>
using namespace std;

void maximum(int num1,int num2,int num3){
  if(num1 >= num2 && num1 >= num3){
    cout<<"num1 is maximum..";
  }
  else if(num2>=num1 && num2>=num3){
    cout<<"num2 is maximun..";
  }
  else{
    cout<<"num3 is maximun..";
  }
}

int main(){
  maximum(10,22,4);
}


