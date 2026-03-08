#include<iostream>
#include<climits>
using namespace std;
int secondLargest(int arr[],int n){
    int largest = arr[0];
    int second_largest = INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    if(second_largest == INT_MIN){
        return -1;
    }
    
    return second_largest;

}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = secondLargest(arr,n);
    cout<<"The second largest element in the array is: "<<ans;

    return 0;
}