#include<iostream> 
using namespace std; 

struct Node
{
    int data;
    Node* prev;
    Node* next;
};
Node* create(int data){
    Node* newnode = new Node;
    newnode->data=data;
    newnode->next=nullptr;
    newnode->prev=nullptr;
    return newnode;
}

void print_head(Node* newnode){
    while(newnode!=nullptr){
        cout<<newnode->data<<" ";
        newnode=newnode->next;
    }
}

void print_tail(Node* tail){
    Node* temp = tail;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main() {
    Node* head = create(10);
    Node* middle = create(11);
    Node* last = create(12);

    // Linking nodes
    head->next = middle;
    middle->prev = head;
    middle->next = last;
    last->prev = middle;

    // Print list forward
    print_head(head);

    // Print list in reverse
    print_tail(last);

    return 0;
}