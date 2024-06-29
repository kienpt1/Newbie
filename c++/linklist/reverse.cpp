#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNewNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Function to reverse the linked list
void reverseList(Node*& head) {
    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    next = current->next;
    cout<<next<<" ";
    // Reverse current node's pointer
    current->next = prev;
    cout <<current->next << " ";
    // Move pointers one position ahead
    prev = current;
    cout<<current << " ";
    cout<<prev << " ";
    current = next;
    cout<<next << " ";
    cout<<current << " ";
    // while (current != nullptr) {
    //     // Store next
    //     next = current->next;
    //     // cout<<next<<" ";
    //     // Reverse current node's pointer
    //     current->next = prev;
    //     // cout <<prev;
    //     // Move pointers one position ahead
    //     prev = current;
    //     current = next;
    // }
    // head = prev;
}

int main() {
    // Creating nodes
    Node* head = createNewNode(10);
    Node* second = createNewNode(20);
    Node* third = createNewNode(30);

    // Linking nodes
    head->next = second;
    second->next = third;

    // cout << "Original list: ";
    // printList(head);

    // Reverse the list
    reverseList(head);

    // cout << "Reversed list: ";
    // printList(head);

    // Free memory (optional step for memory management)
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
