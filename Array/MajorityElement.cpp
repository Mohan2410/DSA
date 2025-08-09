#include<iostream>
#include<algorithm>
using namespace std;
int majorityElement(int nums[],int n){
    sort(nums,nums+n);

    int freq = 1;
    int ans = nums[0];

    for(int i=1;i<n;i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            // reset 
            freq = 1;
            ans = nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}
int main(){
    int nums[] = {1,1,1,1,2,2,3,1,8};
    int n = sizeof(nums)/sizeof(nums[0]);

    int ans = majorityElement(nums,n);
    cout<<"Majority element in the array nums is: "<<ans<<endl;
}