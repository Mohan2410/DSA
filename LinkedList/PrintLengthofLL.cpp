#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next = NULL;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
int getLength(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // linking node 
    head->next = second;
    second->next = third;
    third->next = fourth;

    int ans = getLength(head);
    cout<<"length of the LL is: "<<ans<<endl;
}