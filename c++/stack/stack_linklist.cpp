// // C++ program to Implement a stack
// // using singly linked list
// #include <bits/stdc++.h>
// using namespace std;

// // creating a linked list;
// class Node {
// public:
// 	int data;
// 	Node* link;

// 	// Constructor
// 	Node(int n)
// 	{
// 		this->data = n;
// 		this->link = NULL;
// 	}
// };

// class Stack {
// 	Node* top;

// public:
// 	Stack() { top = NULL; }

// 	void push(int data)
// 	{

// 		// Create new node temp and allocate memory in heap
// 		Node* temp = new Node(data);

// 		// Check if stack (heap) is full.
// 		// Then inserting an element would
// 		// lead to stack overflow
// 		if (!temp) {
// 			cout << "\nStack Overflow";
// 			exit(1);
// 		}

// 		// Initialize data into temp data field
// 		temp->data = data;

// 		// Put top pointer reference into temp link
// 		temp->link = top;

// 		// Make temp as top of Stack
// 		top = temp;
// 	}

// 	// Utility function to check if
// 	// the stack is empty or not
// 	bool isEmpty()
// 	{
// 		// If top is NULL it means that
// 		// there are no elements are in stack
// 		return top == NULL;
// 	}

// 	// Utility function to return top element in a stack
// 	int peek()
// 	{
// 		// If stack is not empty , return the top element
// 		if (!isEmpty())
// 			return top->data;
// 		else
// 			exit(1);
// 	}

// 	// Function to remove
// 	// a key from given queue q
// 	void pop()
// 	{
// 		Node* temp;

// 		// Check for stack underflow
// 		if (top == NULL) {
// 			cout << "\nStack Underflow" << endl;
// 			exit(1);
// 		}
// 		else {

// 			// Assign top to temp
// 			temp = top;

// 			// Assign second node to top
// 			top = top->link;

// 			// This will automatically destroy
// 			// the link between first node and second node

// 			// Release memory of top node
// 			// i.e delete the node
// 			free(temp);
// 		}
// 	}

// 	// Function to print all the
// 	// elements of the stack
// 	void display()
// 	{
// 		Node* temp;

// 		// Check for stack underflow
// 		if (top == NULL) {
// 			cout << "\nStack Underflow";
// 			exit(1);
// 		}
// 		else {
// 			temp = top;
// 			while (temp != NULL) {

// 				// Print node data
// 				cout << temp->data;

// 				// Assign temp link to temp
// 				temp = temp->link;
// 				if (temp != NULL)
// 					cout << " -> ";
// 			}
// 		}
// 	}
// };

// // Driven Program
// int main()
// {
// 	// Creating a stack
// 	Stack s;

// 	// Push the elements of stack
// 	s.push(11);
// 	s.push(22);
// 	s.push(33);
// 	s.push(44);

// 	// Display stack elements
// 	s.display();

// 	// Print top element of stack
// 	cout << "\nTop element is " << s.peek() << endl;

// 	// Delete top elements of stack
// 	s.pop();
// 	s.pop();

// 	// Display stack elements
// 	s.display();

// 	// Print top element of stack
// 	cout << "\nTop element is " << s.peek() << endl;

// 	return 0;
// }
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Push: Adds a new node with the given data to the top of the stack
void push(Node*& topNode, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = topNode;
    topNode = newNode;
}

// Pop: Removes the top node from the stack
void pop(Node*& topNode) {
    if (topNode == nullptr) {
        cout << "Stack underflow" << endl;
        return;
    }
    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
}

// Top: Returns the data of the top node
int top(Node* topNode) {
    if (topNode == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return topNode->data;
}

// IsEmpty: Checks if the stack is empty
bool isEmpty(Node* topNode) {
    return topNode == nullptr;
}

// PrintStack: Prints all elements in the stack
void printStack(Node* topNode) {
    Node* current = topNode;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Cleanup: Deletes all nodes in the stack to prevent memory leaks
void printStack(Node* topNode) {
    Node* current = topNode;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* stack = nullptr;

    // Push elements onto the stack
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    
    cout << "Stack elements: ";
    printStack(stack);
    
    // Get the top element
    cout << "Top element: " << top(stack) << endl;
    
    // Pop the top element
    pop(stack);
    
    cout << "Stack elements after pop: ";
    printStack(stack);
    
    // Get the top element after pop
    cout << "Top element after pop: " << top(stack) << endl;

    // Cleanup the stack
    cleanup(stack);

    return 0;
}
