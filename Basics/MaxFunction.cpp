
#include<iostream>
using namespace std;

int printMaximum(int n1,int n2,int n3){
  int sol1 = max(n1,n2);
  int sol2 = max(sol1,n3);
  return sol2;
}

int main(){
  int maximum = printMaximum(10,15,80);
  cout<<"Maximum is: "<<maximum;
}
