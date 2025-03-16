#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int size = 5;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value of index "<<i<<": ";
        cin>>arr[i];
        cout<<endl;
    }

    // total sum of the array 

    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum = sum+arr[i];
        
    }

    cout<<"Sum of the total element present in the array is: "<<sum<<endl;
}