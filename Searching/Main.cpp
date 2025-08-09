// find firstOcc, lastOcc and totalOcc in an array 

#include<iostream>
using namespace std;
int firstOccourance(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    
    int ans = -1;

    while(start<=end){
        if(arr[mid]==target){
            ans = mid;
            end = mid - 1;
        }
        else if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int lastOccourance(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    
    int res = -1;

    while(start<=end){
        if(arr[mid]==target){
            res = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return res;
    
}

int totalOcc(int arr[],int size,int target){
    // int start = 0;
    // int end = size - 1;
    // int mid = (start+end)/2;
    // int result = -1;

    // while(start<=end){
        
    // }

    int firstOcc = firstOccourance(arr,size,target);
    int lastOcc = lastOccourance(arr,size,target);
    int total = lastOcc - firstOcc + 1;
    return total;
}

int main()
{
    int arr[] = {10,20,30,30,30,30,30,30,30,30,40,50,60};
    int size = 13;
    int target = 30;

    int ans = firstOccourance(arr,size,target);
    cout<<"first occ is at index: "<<ans<<endl;

    int res = lastOccourance(arr,size,target);
    cout<<"last occ is at index: "<<res<<endl;

    int result = totalOcc(arr,size,target);
    cout<<"Total occ of the target is: "<<result<<endl;
}