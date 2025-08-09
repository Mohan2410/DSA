#include<iostream>
using namespace std;
int binSearch(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    int target;
    cout<<"Enter a element which you want to find: "<<endl;
    cin>>target;

    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main()
{
    int arr[]  = {10,20,30,40,50,60,66,70,80,90};
    int size = 9;

    int ans = binSearch(arr,size);
    if(ans == -1){
        cout<<"element is not found"<<endl;
    }else{
        cout<<"element found.."<<endl;
    }

    cout<<"The element found is at index: "<<ans<<endl;
}