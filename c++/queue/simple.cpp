#include <iostream>
#include <stdexcept>
using namespace std;

struct Deque {
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;
};

void initializeDeque(Deque& deque, int capacity) {
    deque.capacity = capacity;
    deque.arr = new int[capacity];
    deque.size = 0;
    deque.front = -1;
    deque.rear = 0;
}

void destroyDeque(Deque& deque) {
    delete[] deque.arr;
}

bool isEmpty(const Deque& deque) {
    return deque.size == 0;
}

bool isFull(const Deque& deque) {
    return deque.size == deque.capacity;
}

void addFront(Deque& deque, int item) {
    if (isFull(deque)) {
        throw overflow_error("Deque is full");
    }
    if (deque.front == -1) {
        deque.front = 0;
        deque.rear = 0;
    } else if (deque.front == 0) {
        deque.front = deque.capacity - 1;
    } else {
        deque.front -= 1;
    }
    deque.arr[deque.front] = item;
    deque.size += 1;
}

void addRear(Deque& deque, int item) {
    if (isFull(deque)) {
        throw overflow_error("Deque is full");
    }
    if (deque.front == -1) {
        deque.front = 0;
        deque.rear = 0;
    } else if (deque.rear == deque.capacity - 1) {
        deque.rear = 0;
    } else {
        deque.rear += 1;
    }
    deque.arr[deque.rear] = item;
    deque.size += 1;
}

int removeFront(Deque& deque) {
    if (isEmpty(deque)) {
        throw underflow_error("Deque is empty");
    }
    int item = deque.arr[deque.front];
    if (deque.front == deque.rear) {
        deque.front = -1;
        deque.rear = 0;
    } else if (deque.front == deque.capacity - 1) {
        deque.front = 0;
    } else {
        deque.front += 1;
    }
    deque.size -= 1;
    return item;
}

int removeRear(Deque& deque) {
    if (isEmpty(deque)) {
        throw underflow_error("Deque is empty");
    }
    int item = deque.arr[deque.rear];
    if (deque.front == deque.rear) {
        deque.front = -1;
        deque.rear = 0;
    } else if (deque.rear == 0) {
        deque.rear = deque.capacity - 1;
    } else {
        deque.rear -= 1;
    }
    deque.size -= 1;
    return item;
}

int peekFront(const Deque& deque) {
    if (isEmpty(deque)) {
        throw underflow_error("Deque is empty");
    }
    return deque.arr[deque.front];
}

int peekRear(const Deque& deque) {
    if (isEmpty(deque)) {
        throw underflow_error("Deque is empty");
    }
    return deque.arr[deque.rear];
}

int main() {
    Deque dq;
    initializeDeque(dq, 5);

    addRear(dq, 1);
    addRear(dq, 2);
    addFront(dq, 0);

    cout << "Deque: ";
    for (int i = 0; i < dq.size; i++) {
        cout << dq.arr[(dq.front + i) % dq.capacity] << " ";
    }
    cout << endl;

    cout << "Remove front: " << removeFront(dq) << endl;
    cout << "Remove rear: " << removeRear(dq) << endl;

    cout << "Deque after removals: ";
    for (int i = 0; i < dq.size; i++) {
        cout << dq.arr[(dq.front + i) % dq.capacity] << " ";
    }
    cout << endl;

    cout << "Peek front: " << peekFront(dq) << endl;

    destroyDeque(dq);
    return 0;
}