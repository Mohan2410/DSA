#include<iostream>
#include<climits>
using namespace std;
int findMinnummber(int arr[],int size)
{
    int minAns = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns = arr[i];
            cout<<endl;
        }
    }
}
int main(){
    int arr[] = {10,20,30,40,50,600,543};
    int size = 7;
    
    int ans = findMinnummber(arr,size);
    cout<<"the minimum number is: "<<ans<<endl;
}