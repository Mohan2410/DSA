#include<iostream>
using namespace std;
int getUnique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
        
    }
    return ans;
}
int main(){
    int arr[] = {2,4,11,22,17,2,4,22,17};
    int size = 9;
    int finalAns = getUnique(arr,size);
    cout<<"Unique element in an array is: "<<finalAns<<endl;
}