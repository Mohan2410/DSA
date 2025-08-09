#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int j = 3;


    int&z = j; 
    int&k = n;
    int&m = n;

    cout<<"n: "<<n<<endl;
    cout<<"k: "<<n<<endl;
    cout<<"c: "<<n<<endl;

    int sum = z+m;
    cout<<"Addition is: "<<sum<<endl;

    sum++;
    cout<<sum;
}