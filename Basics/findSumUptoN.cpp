

// Sum of all number upto n using function

#include<iostream>
using namespace std;

void findSumUptoN(int n){
  int sum = 0;

  for(int i=1;i<=n;i++){
    sum = sum + i;
  }
  cout<<"sum is: "<<sum;
}

int main(){
  findSumUptoN(10);
}