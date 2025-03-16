#include<iostream>
using namespace std;
void shiftNegativeOne(int arr[],int size){
    int j = 0;
    for(int index=0;index<size;index++){
        if(arr[index]<0){
            swap(arr[index],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[] = {10,-2,-5,89,32,66,-43,-90,-7};
    int size = 9;

    shiftNegativeOne(arr,size);

    // printing the array 
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// output: 
// -2 -5 -43 -90 -7 66 10 89 32 