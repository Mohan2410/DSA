#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(row==0 && row==4 && col==0 && col==4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}