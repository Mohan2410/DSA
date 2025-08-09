// bubble sort 

#include<iostream>
using namespace std;
void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }
        swap(arr[i],arr[minIndex]);
    }
}
void mohan(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {23,11,55,33,22,76,87,65};
    int size = 8;

    selectionSort(arr,size);
    mohan(arr,size);
}