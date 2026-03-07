#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int i = 0;
    int j = n - 1;

    while(i <= j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reverseArray(arr,n);
    cout<<"After reversing the array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}