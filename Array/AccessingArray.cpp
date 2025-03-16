#include<iostream>
using namespace std;
<<<<<<< HEAD
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

    cout<<"Printing the array: "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
=======
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    
    cout<<arr[0]<<endl;
    cout<<arr[3]<<endl;

    int n = 7;
    for(int i=0;i<n;i++){
        cout<<"Array is: "<<arr[i]<<" ";
>>>>>>> a00b498 (Your commit message)
    }
}