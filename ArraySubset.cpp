#include<iostream>
#include<algorithm>
using namespace std;
bool isSubset(int a[],int b[],int m,int n){
    sort(a,a+n);
    sort(b,b+m);

    int i = 0;
    int j = 0;

    while(i < n && j < m){
        if(a[i] == b[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }

    if(j == m){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n,m;
    cout<<"Enter the number of elementsin Array A: ";
    cin>>n;

    int a[n];
    cout<<"Enter the elements in array A: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the number of Elements in Array B: ";
    cin>>m;

    int b[m];
    cout<<"Enter the elements in Array B: ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    bool ans = isSubset(a,b,m,n);

    if(ans == 1){
        cout<<"B is subset of A"<<endl;
    }else{
        cout<<"B is not subset of A";
    }

    return 0;
}