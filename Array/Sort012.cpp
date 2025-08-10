#include<iostream>
using namespace std;
void sortZeroOneTwo(int nums[],int n){
    int index = 0;
    int left = 0;
    int right = n-1;

    while(index<=right){
        if(nums[index]==0){
            swap(nums[index],nums[left]);
            left++;
            index++;
        }
        else if(nums[index]==2){
            swap(nums[index],nums[right]);
            right--;
        }else{
            index++;
        }
    }
}
void printSortedArray(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int nums[] = {2,0,2,1,1,0};
    int n = 6;

    sortZeroOneTwo(nums,n);
    printSortedArray(nums,n);
}