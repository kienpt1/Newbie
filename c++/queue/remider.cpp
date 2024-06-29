#include<iostream>
#include <stdexcept>
using namespace std ;

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
    deque.size=0;
    deque.front=-1;
    deque.rear=0; 
}
void destroydeque(Deque& deque){
    delete[] deque.arr;
}

bool isempty(const Deque& deque){
    return deque.size=0;
}

bool isFull(const Deque& deque){
    return deque.size==deque.capacity;
}

void addfront(Deque& deque,int item){
    if(isFull(deque)){
        throw overflow_error("deque is full")
    }
    if(deque.front==-1){
        deque.front=0;
        deque.rear=0; 
    }else if(deque.front==0){
        deque.front=deque.capacity-1;
    }else{
        deque.front -= 1;
    }
    deque.arr[deque.front]=item;
    deque.size+=1;
}


int main(){
    Deque dq;
    initializeDeque(dq, 5);
}