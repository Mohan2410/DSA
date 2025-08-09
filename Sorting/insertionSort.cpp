#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev--; 
        }
        arr[prev+1] = current;
    }
}
void pArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {238,19,42,11,43,87};
    int n = 6;

    insertionSort(arr,n);
    pArray(arr,n);
}