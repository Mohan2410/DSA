#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){ 
            return true;
        }
    }
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int target = 70;
    bool ans = linearSearch(arr,n,target);
    if(ans){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}