#include<iostream>
using namespace std;
int getUnique(int nums[],int n){
    int ans = 0;

    for(int i=0;i<n;i++){
        ans = ans^nums[i];
    }
    return ans;
}
int main(){
    int nums[] = {10,20,10,20,44,88,44,88,50};
    int n = 9;

    int finalAns = getUnique(nums,n);
    cout<<"Single element in array is: "<<finalAns<<endl;
}