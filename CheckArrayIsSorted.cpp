#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the number of Elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter a elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans = isSorted(arr,n);
    
    if(ans == 1){
        cout<<"Array is sorted..."<<endl;
    }else{
        cout<<"Array is unsorted...."<<endl;
    }

}