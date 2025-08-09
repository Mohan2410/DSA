#include<iostream>
#include<string.h>
using namespace std;
bool isPalindrome(char ch[],int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);

    int len = strlen(ch);
    bool ans = isPalindrome(ch,len);
    if(ans){
        cout<<"palindrome..."<<endl;
    }
    else{
        cout<<"not palindrome..."<<endl;
    }
    

}