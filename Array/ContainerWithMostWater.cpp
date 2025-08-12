#include<iostream>
using namespace std;
int mostWater(int height[],int n){
    int maxWater = 0;
    int lp = 0;
    int rp = n-1;

    while(lp < rp){
        int width = rp - lp; //yaha par index ki substraction karni padti hai

        int ht = min(height[lp],height[rp]);
        int currWater = width * ht;
        maxWater = max(currWater,maxWater);

        if(height[lp] < height[rp]){
            lp++;
        }else{
            rp--;
        }
    }
    return maxWater;
}
int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int finalAns = mostWater(height,n);
    cout<<"Maximum water is: "<<finalAns<<endl;
}
