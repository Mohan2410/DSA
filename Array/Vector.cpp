#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(90);
    cout<<vec[0]<<endl;

    vector<int> num = {10,20,30,54};
    cout<<num[2] <<endl;

    for(int i=0;i<num.size();i++){
        cout<<num[i]<<endl;
    }

    vector<string> alpha = {"mohan","ram","jay","om","sham"};
    for(int j=0;j<alpha.size();j++){
        cout<<"name: "<<alpha[j]<<endl;
    }

    vector<char> character = {'a','b','c','d'};
    for(int k=0;k<character.size();k++){
        cout<<"character: "<<character[k] <<endl;
    }

    cout<<"size = "<<character.size()<<endl;
    cout<<"size = "<<vec.size();
}
