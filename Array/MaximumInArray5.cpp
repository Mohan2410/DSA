#include<iostream>
#include<climits>
using namespace std;
int findMaximunInArray(int arr[],int size){
    int maxAns = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main(){
    int arr[] = {10,20,30,40,50,60,66,22};
    int size = 8;

    int answer = findMaximunInArray(arr,size);
    cout<<"Maximum value is: " <<answer <<endl;
}