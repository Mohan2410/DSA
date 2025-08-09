// #include<iostream>
// using namespace std;
// int incrementby1(int n){
//     n = n+1;
//     return n;
// }
// int main(){
//     int n = 5;
//     cout<<n<<endl;
//     int ans = incrementby1(n);

//     return 0;
// }

// call by value 
#include<iostream>
using namespace std;
void incrementby1(int &n){
    n = n+1;
    cout<<n;
}
int main(){
    int n = 5;
    cout<<n<<endl;
    incrementby1(n);
    cout<<n;

    return 0;
}