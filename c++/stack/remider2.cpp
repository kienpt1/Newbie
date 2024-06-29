// #include<iostream> 
// using namespace std; 
// #define Max_size 5 

// // one stack need one structure that contain top and array in any stack the most important thing is top because 
// // stack just query by top follow the principle lifo so 
// // step 2 : create a structure of stack 
// struct  Stack
// {
//     int top;
//     int arr[Max_size];
// };

// void initstack(Stack &stack){
//     stack.top=-1;
// }
// bool isempty(Stack &stack){
//     return stack.top=-1;
// }
// bool isfull(Stack &stack){
//     return stack.top==Max_size-1;
// }

// void push(Stack &stack,int value){
//     if(isfull(stack)){
//         cout<< "stack overflow"<<endl;
//         return;
//     }
//     stack.arr[++stack.top] = value;
// }

// int pop(Stack &stack){
//     if(isempty(stack)){
//         cout<<"Stack overflow"<<endl;
//         return -1;
//     }
//     return stack.arr[stack.top--];
// }
// int peek(Stack &stack) {
//     if (isempty(stack)) {
//         cout << "Stack is Empty" << endl;
//         return -1;
//     }
//     return stack.arr[stack.top];
// }
// // step 1 . I'll create a main to collapse totals function i wanna run 
// int main(){
//     // step 3. call my stack let it be created 
//     Stack stack; // kind stack and name is stack
//     initstack(stack); 
//     push(stack, 10);
//     push(stack, 20);
//     push(stack, 30);

//     cout << "Top element is: " << peek(stack) << endl;

//     cout << "Elements popped from stack: " << endl;
//     while (!isempty(stack)) {
//         cout << pop(stack) << " ";
//     }
//     cout << endl;

//     return 0;


    
// }
#include<iostream>
using namespace std; 
struct Node
{
    int data;
    Node* next;
};

void push(Node* topnode,int data){
    Node* newNode = new Node;
    newNode->data=data;
    newNode->next=nullptr;
    topnode=newNode;
}

void pop(Node* topnode){
    if(topnode == nullptr) {
        cout << "Stack underflow" << endl;
        return;
    }
    Node* temp=topnode;
    topnode=topnode->next;
    delete temp;
}
int top(Node* topNode) {
    if (topNode == nullptr) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return topNode->data;
}
bool isEmpty(Node* topNode) {
    return topNode == nullptr;
}
void printStack(Node* topNode) {
    Node* current = topNode;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
void printStack(Node* topNode) {
    Node* current = topNode;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main(){
    Node* stack=nullptr;
}

