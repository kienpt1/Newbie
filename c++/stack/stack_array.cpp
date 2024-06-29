#include <iostream>
using namespace std;

#define MAX_SIZE 5

struct Stack {
    int top;
    int array[MAX_SIZE];
};

// Initialize the stack
void initStack(Stack &stack) {
    stack.top = -1;
}

// Check if the stack is empty
bool isEmpty(Stack &stack) {
    return stack.top == -1;
}

// Check if the stack is full
bool isFull(Stack &stack) {
    return stack.top == MAX_SIZE - 1;
}

// Push operation
void push(Stack &stack, int value) {
    if (isFull(stack)) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack.array[++stack.top] = value;
}

// Pop operation
int pop(Stack &stack) {
    if (isEmpty(stack)) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    return stack.array[stack.top--];
}

// Peek operation
int peek(Stack &stack) {
    if (isEmpty(stack)) {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return stack.array[stack.top];
}

int main() {
    Stack stack;
    initStack(stack);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    cout << "Top element is: " << peek(stack) << endl;

    cout << "Elements popped from stack: " << endl;
    while (!isEmpty(stack)) {
        cout << pop(stack) << " ";
    }
    cout << endl;

    return 0;
}
