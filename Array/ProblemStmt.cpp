// starting me array create karen then, user se input le and next,
// print karen and uske baad double up kare(means jo bhi array print hua hoga usko into 2 karen) 

#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n = 10;

    for(int i=0;i<n;i++){
        cout<<"Enter the value of the index: "<<i<<endl;
        cin>>arr[i];
        cout<<endl;
    }


    // for(int i=0;i<n;i++){
    //     arr[i] = 2*arr[i];
    // }

    // printing after the double up 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    


}