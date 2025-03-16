#include<iostream>
<<<<<<< HEAD
#include<stdio.h>
using namespace std;
int main(){
    int a = 10;
    int b = 3;
    int c = a+b;
    cout<<c;
=======
using namespace std;
int main(){
    int arr[7];
    int n = 7;

    for(int i=0;i<n;i++){
        cout<<"Enter the value of the index: "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"Printing the array in a row: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
>>>>>>> a00b498 (Your commit message)
}