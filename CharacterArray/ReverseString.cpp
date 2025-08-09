
#include<iostream>
#include<string.h>
using namespace std;
void reverseString(char ch[],int size){
    int i = 0;
    int j = size-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        {
            i++;
            j--;
        }
    }
}
void printString(char ch[],int size){
     for(int i=0;i<size;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
}
int main(){
    char ch[100];
    cin.getline(ch,100);

    int len = strlen(ch);

    reverseString(ch,len);
    printString(ch,len);
    cout<<"reverse string is: "<<ch<<endl;

}