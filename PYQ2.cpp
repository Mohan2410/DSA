#include<iostream>
using namespace std;
int equalSum(int arr[],int n){
    for(int i=0;i<n;i++){
        int left_sum = 0;
        int right_sum = 0;

        for(int j=0;j<i;j++){
            left_sum = left_sum + arr[j];
        }

        for(int j=i+1;j<n;j++){
            right_sum = right_sum + arr[j];
        }

        if(left_sum == right_sum){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of lements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = equalSum(arr,n);

    if(ans != 1){
        cout<<"Equal element is found.."<<endl;
    }else{
        cout<<"Equal element is not found..."<<endl;
    }


    cout<<"Element found at index is: "<<ans<<endl;
    return 0;
}