#include<iostream>
#include<climits>
using namespace std;

int findMinimumArray(int arr[],int size){
    int minAns = INT_MAX;
    
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
}
int main(){
    int arr[] = {10,3,4,656,2,18,54};
    int size = 7;
    int answer = findMinimumArray(arr,size);
    cout<<"Minimum value in array is: "<<answer<<endl;

    // int answer = findMinimumArray()
}