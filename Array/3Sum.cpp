#include<iostream>
#include<algorithm>
using namespace std;
int threeSum(int nums[],int n){
    sort(nums,nums + n);
    int ans[100][3];
    int count = 0;

    for(int i=0;i<n;i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i+1;
        int k = n-1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum<0){
                j++;
            }else if(sum>0){
                k--;
            }
            else{
                ans[count][0] = nums[i];
                ans[count][1] = nums[j];
                ans[count][2] = nums[k];

                count++;

                j++;
                k--;

                while(j < k && nums[j] == nums[j-1]){
                    j++;
                }
            }
        }
    }
    // print triplet
    for(int i=0;i<count;i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
    return count;
}
int main(){
    int nums[] = {-1,0,1,2,-1,-4};
    int n = sizeof(nums)/sizeof(nums[0]);

    int count = threeSum(nums,n);
    cout<<"Total triplet: "<<count<<endl;
}