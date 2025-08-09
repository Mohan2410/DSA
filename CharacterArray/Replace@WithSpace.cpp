#include<iostream>
using namespace std;
void replaceWithSpace(char ch[],int size){
    int index = 0;
    while(ch[index] != '\0'){
        if(ch[index] == '@'){
            ch[index] = ' ';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cout<<"Enter a String: "<<endl;
    cin.getline(ch,100);
    replaceWithSpace(ch,100);
    cout<<"Replace @ with space is: "<<ch<<endl;
}