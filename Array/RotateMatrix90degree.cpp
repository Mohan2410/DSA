#include<iostream>
#include<algorithm>
using namespace std;
void rotateArray(int matrix[][3],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i],matrix[i] + n);
    }
}
int main(){
    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = sizeof(matrix) / sizeof(matrix[0]);

    rotateArray(matrix,n);

    // for printing the rotating matrix 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}