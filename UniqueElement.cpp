#include<iostream>
using namespace std;
int findUniqueElement(int arr[],int n){
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number of elements: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = findUniqueElement(arr,n);
    cout<<"Unique element is: "<<ans<<endl;

    return 0;
}