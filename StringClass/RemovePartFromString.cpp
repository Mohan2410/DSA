#include<iostream>
using namespace std;
string removePart(string s,string part){
    while(s.find(part) != string::npos){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s = "abaccbabaddcbaccd";
    string part = "cba";

    removePart(s,part);
    // cout<<"fina"
}