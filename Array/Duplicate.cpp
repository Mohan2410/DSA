//write the code using the slow and fast approach

#include<iostream>
using namespace std;
int findDuplicate(int nums[],int n){
    int slow = nums[0];
    int fast = nums[0];
    do 
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = nums[0];

    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
int main(){
    int nums[] = {3,1,3,4,2};
    int n = 5;

    int ans = findDuplicate(nums,n);
    cout<<"the duplicate in the nums array is: "<<ans<<endl;
}