#include<iostream> 
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* Createnewnode(int data){
    Node* newnode = new Node;
    newnode->data=data;
    newnode->next=nullptr;
    return newnode;
}

void prindlist(Node* newnode){
    while(newnode!=nullptr){
        cout<<newnode->data<<" ";
        newnode=newnode->next;
    }
}

void reverse(Node* head){
    Node* current=head;
    Node* prev=NULL;
    Node* next=NULL;
    cout<<next->next<<next->data;
    

}

int main(){
    Node* head = Createnewnode(10);

    

    // prindlist(head); 
    reverse(head);
    }