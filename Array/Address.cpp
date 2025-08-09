//find the addresss and the size of the variable

#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<"Address of A is: "<<&a<<endl;

    int arr = 7;
    cout<<"Size of arr: "<<sizeof(arr)<<endl;

    int brr[10];
    cout<<"size of the brr is: "<<sizeof(brr)<<endl;

    int mrr[] = {1,3,4,5,6};

    // int crr[4] = {12,3,4,5,5,6}; //this line gives the error
    
}