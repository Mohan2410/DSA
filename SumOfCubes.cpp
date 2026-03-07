#include<iostream>
using namespace std;
int cubeOfNumber(int num){
    return num*num*num;
}
int main(){
    
    int left = 2;
    int right = 5;

    long sum = 0;
    for(int i = left;i<=right;i++){
        sum = sum + cubeOfNumber(i);
    }

    cout<<"sum of cube is: "<<sum<<endl;

}