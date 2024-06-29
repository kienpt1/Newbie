#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createnewnode(int data) {
    Node* newnode = new Node;
    newnode->data = data;
    newnode->next = nullptr;
    return newnode;
}

void printList(Node* node) {
    int count = 0;
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
        count++;
    }
    cout << count;
}

Node* reverse(Node* head) {
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void insertlinklist(Node* prevnode, int data) {
    Node* newnode = new Node;
    newnode->data = data;
    newnode->next = prevnode->next;
    prevnode->next = newnode;
}
void deletelink(Node* head){
    Node* temps=head;
    head=head->next;
}
void deletelinlast(Node* head){
    Node* prev = nullptr;
    while (head!=nullptr)
    {   prev=head;
        head=head->next;
    }
    prev->next=nullptr;
    
}

int main() {
    Node* head = createnewnode(10);
    Node* middle = createnewnode(11);
    Node* last = createnewnode(12);
    head->next = middle;
    middle->next = last;

    head = reverse(head);
    printList(head);
}
