// peak element in mountain 


#include<iostream>
using namespace std;

int findPeak(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
        start = mid + 1;
        }else{
            end = mid;
        }
        mid = (start + end)/2;
    }
    return start;
    
}

int main()
{
    int arr[] = {10,20,30,50,40,30};
    int size = 6;
    
    int ans = findPeak(arr,size);
    cout<<"peak element in an array is at index: "<<ans<<endl;

}