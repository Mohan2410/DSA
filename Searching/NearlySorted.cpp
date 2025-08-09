#include<iostream>
using namespace std;
int searchNearlySorted(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(mid-1 >=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(mid+1 <=size && arr[mid+1]==target){
            return mid+1;
        }

        if(target > arr[mid]){
            start = mid + 2;
        }
        else{
            end = mid - 2;
        }
        
    }
    return -1;
}
int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int size = 7;
    int target = 60;

    int targetIndex =  searchNearlySorted(arr,size,target);
    if(targetIndex == -1){
        cout<<"element not found..."<<endl;
    }
    else{
        cout<<"element found..."<<endl;
        cout<<"Element found at index: " <<targetIndex <<endl;
    }
}