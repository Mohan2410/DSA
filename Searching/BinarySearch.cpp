#include<iostream>
using namespace std;
int binarySearch(int arr[],int size){
    int target;
    cout<<"Enter a element: "<<endl;
    cin>>target;
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }else if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;  //agar element nahi mila toh
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = 9;

    int ans = binarySearch(arr,size);
    if(ans==-1){
        cout<<"Element not fount"<<endl;
    }else{
        cout<<"Element found.."<<endl;
    }

    cout<<"Element found at index: "<<ans<<endl;
}