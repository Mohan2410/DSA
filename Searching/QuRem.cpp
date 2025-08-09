#include<iostream>
using namespace std;
int getQuotient(int divisor, int dividend){
    int start = 0;
    int end = dividend;
    int mid = (start+end)/2;
    int ans = -1;

    while(start<=end){
        cout<<"start: "<<start <<" end: "<<end<<endl;
        if(mid * divisor == dividend){
            return mid;
        }
        if(mid * divisor < dividend){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start+end)/2;

    }
    return ans;

}
int main(){
    int divisor = 7;
    int dividend = 29;

    int ans = getQuotient(divisor,dividend);
    cout<<"Final ans: "<<ans<<endl;


}