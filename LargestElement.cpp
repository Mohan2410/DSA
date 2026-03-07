#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int maximum = arr[0];

    for(int i=0;i<n;i++){
        maximum = max(maximum, arr[i]);
    }

    return maximum;
}
int main(){
    int n;
    cout<<"Enter a number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter a elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = largestElement(arr,n);
    cout<<"Largest element is: "<<res;

    return 0;
}