#include<iostream>
using namespace std;
int missingElement(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        int diff = arr[mid] - mid;

        if(diff==1){
            s=mid+1;
        }else{
            ans=mid;
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    
    if(ans+1 == 0){
        return size+1;
    }
    return ans+1;

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;

    cout << missingElement(arr,size); 
}