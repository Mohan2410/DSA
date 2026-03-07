#include<iostream>
using namespace std;
int meanArray(int arr[],int n){
    int sum = 0;

    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum/n;
}
int main(){
    int n;
    cout<<"Enter a number of element: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int final = meanArray(arr,n);
    cout<<"Mean of an array is: "<<final;

    return 0;
}