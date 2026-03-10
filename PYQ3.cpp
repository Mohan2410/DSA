// Chocolate factory convyer belt problem 

#include<iostream>
using namespace std;
int lastZero(int arr[],int N){
    int pos = 0;

    for(int i=0;i<N;i++){
        if(arr[i] != 0){
            arr[pos++] = arr[i];
        }
    }

    while(pos < N){
        arr[pos++] = 0;
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int N;
    cout<<"Enter the number of elements: ";
    cin>>N;

    int arr[N];
    cout<<"Enter the elements: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    int ans = lastZero(arr,N);


}