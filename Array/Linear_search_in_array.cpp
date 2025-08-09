#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,4,6,8,10};
    int n = 5;
    int target = 11;

    bool flag = 0;

    // flag 0-> target is not found
    // flag 1->target is found

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"target is found...";
    }
    else
    {
        cout<<"target is not found..."<<endl;
    }
}