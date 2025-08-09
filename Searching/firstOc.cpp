#include<iostream>
using namespace std;
int firstOcc(int arr[],int size,int target){
    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    int ans = -1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target <arr[mid]){
            end = mid - 1;
        }
        
    }

    return ans;
}
int main(){
    int arr[] = {10,20,30,30,30,30,40,50};
    int size = 8;
    int target = 30;

    int ans = firstOcc(arr,size,target);
    if(ans == -1){
        cout<<"not found..."<<endl;
    }
    else{
        cout<<"found.."<<endl;
    }
    cout<<"First accourance of the number at index: "<<ans<<endl;
}