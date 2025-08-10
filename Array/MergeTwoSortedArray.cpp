#include<iostream>
#include<algorithm>
using namespace std;

void mergeTwoSortedArray(int nums1[],int nums2[],int m,int n){
    int left = m - 1;
    int right = 0;

    while(left >= 0 && right < n){
        if(nums1[left] > nums2[right]){
            swap(nums1[left],nums2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(nums1, nums1 + m);
    sort(nums2, nums2 + n);

    for(int i=0;i<n;i++){
        nums1[m+i] = nums2[i];
    }

}
int main(){
    int nums1[] = {1,3,5,7,0,0,0,0,0};
    int m = 4;

    int nums2[] = {0,2,6,8,9};
    int n = 5;

    mergeTwoSortedArray(nums1,nums2,m,n);

    cout<<"Merged Array: ";
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
}