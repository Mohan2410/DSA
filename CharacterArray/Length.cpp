#include<iostream>
using namespace std;
int findLength(char ch[],int size){

    // for loop 
    // int length = 0;
    // for(int i=0;i<size;i++){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;

    // whileloop
    int len = 0;
    int index = 0;
    while(ch[index] != '\0'){
        len++;
        index++;
    }
    return len;
}
int main(){
    char ch[100];
    cin>>ch;
    int len = findLength(ch,100);
    cout<<"Length of the string is: "<<len<<endl;
}


// OR  we can also use the strlen inbuilt function in cpp in the header file string.h

// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char ch[100];
//     cin.getline(ch,100);
//     int len = strlen(ch);
//     cout<<"length of the character is: "<<len<<endl;
// }