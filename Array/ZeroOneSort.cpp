// input = {1,0,1,0,1,1,0,1,0,1,1,0}

// output ={0,0,0,0,0,1,1,1,1,1,1,1}
#include<iostream>
using namespace std;

void mohan(int arr[],int size){
    int zeroCount = 0;
    int oneCount = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i] == 0)
        {
            zeroCount++;
        }else{
            oneCount++;
        }
    }

    // printting the zero and one count 
    cout<<"Total zero in array is: "<<zeroCount<<endl;
    cout<<"Total one in array is: "<<oneCount<<endl;


    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    while(oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}
int main()
{
    int arr[] = {1,0,1,0,1,1,0,1,0,1,1,0};
    int size = 12;

    mohan(arr,size);

    // printing the array after sorting the zero and one 

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}