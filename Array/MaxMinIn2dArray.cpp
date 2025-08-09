#include<iostream>
#include<limits>
#include<limits.h>
using namespace std;

int findMaxInArray(int arr[][4],int row,int col){
    int ansMax = INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>ansMax){
                ansMax = arr[i][j];
            }
        }
    }
    return ansMax;
}

int findMinInArray(int arr[][4],int row,int col){
    int ansMin = INT_MAX;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<ansMin){
                ansMin = arr[i][j];
            }
        }
    }
    return ansMin;
}
int main(){
    int arr[4][4] = {
        {10,20,30,40},
        {12,25,45,75},
        {55,84,48,14},
        {36,56,96,26}
    };

    int row =4;
    int col = 4;

    int maxnum = findMaxInArray(arr,row,col);
    cout<<"Maximum value in array is: "<<maxnum<<endl;

    int minans = findMinInArray(arr,row,col);
    cout<<"Minimum value in array is: "<<minans<<endl;
}