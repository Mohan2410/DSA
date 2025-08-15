#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
int longestConsecutiveSequence(vector<int>& nums){
    int n = nums.size();
    if(n == 0) return 0;

    int longest = 1;
    unordered_set<int> set;

    for(int i=0;i<n;i++){
        set.insert(nums[i]);
    }

    for(auto val: set){
        if(set.find(val-1) == set.end()){
            int count = 1;
            int x = val;
            while(set.find(x+1) != set.end()){
                x = x+1;
                count = count + 1;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}
int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int ans = longestConsecutiveSequence(nums);
    cout<<"Longest consecutive sequence length is: "<<ans<<endl;
}


// output: 4.............that is = 1,2,3,4