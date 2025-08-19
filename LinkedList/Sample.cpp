#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
        cout<<"this is default constructor"<<endl;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
        cout<<"the parameterized constructor is call"<<endl;
    }
};
int main(){
    // Node a; //static constructor

    // dynamic constructor 
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    return 0;
}