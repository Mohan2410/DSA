#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void setMatrixZero(int matrix[][3],int n,int m){

    vector<int> x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }

    for(int i=0;i<x.size();i++){
        int index = x[i];
        for(int j=0;j<m;j++){
            matrix[index][j] = 0;
        }
    }

    for(int i=0;i<y.size();i++){
        int index = y[i];
        for(int j=0;j<n;j++){
            matrix[j][index] = 0;
        }
        
    }
}
int main(){
    int matrix[3][3] = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    int n = sizeof(matrix) / sizeof(matrix[0]);
    int m = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    

    setMatrixZero(matrix,n,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}