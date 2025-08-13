#include<iostream>
#include<vector>
using namespace std;
vector<int> productArrayExceptItself(int nums[],int n)
{
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    // for calculating the prefix 
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // for calculating the suffix 
    for(int i = n-2;i>=0;i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // for calculating the answer
    for(int i=0;i<n;i++){
        ans[i] = prefix[i] * suffix[i];
    }

    return ans;
}

int main(){
    int nums[] = {1,2,3,4};
    int n = 4;

    vector<int> final = productArrayExceptItself(nums,n);
    
    for(int i=0;i<n;i++){
        cout<<final[i]<<" ";
    }
    cout<<endl;
}
// ProductOfArrayExceptItself