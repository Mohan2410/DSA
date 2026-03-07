#include<iostream>
using namespace std;
int maxConsecutiveBits(int arr[],int n){
    int ans = 1;
    int count = 1;

    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]){
            count++;
        }else{
            count = 1;
        }
        ans = max(ans,count);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter a elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = maxConsecutiveBits(arr,n);
    cout<<"Total consecutive number of bits: "<<ans;

    return 0;
}