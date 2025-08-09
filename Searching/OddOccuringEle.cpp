#include<iostream>
using namespace std;
int findOddOccuringElement(int arr[],int size){
    int start = 0;
    int end = size - 1;
    
    while(start<=end){
        int mid = (start+end)/2;
        if(start==end){
            return start;
        }
        
        // check even or odd
        if(mid & 1){
            if(mid-1>=0 && arr[mid-1] == arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
        else{
            if(mid+1 < size && arr[mid+1] == arr[mid]){
                start = mid + 2;
            }
            else{
                end = mid;
            }
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,10,20,20,5,5,99,3,3,6,6,22,22};
    int size = 11;

    int ansIndex =  findOddOccuringElement(arr,size);
    cout<<"final answer is at index: "<<ansIndex<<endl;
    cout<<"Final answer is: "<<arr[ansIndex]<<endl;
}