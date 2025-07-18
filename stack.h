#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Stack {
    int top;
    int capacity;
    int* arr;

 
    Stack(int size = 100) {
        capacity = size;
        top = -1;
        arr = new int[capacity];
    }

   
  
   
    void push(int item) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = item;
    }


    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1; 
        }
        return arr[top--];
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

 
    bool isEmpty() const {
        return top == -1;
    }

  
    bool isFull() const {
        return top == capacity - 1;
    }
};

#endif 

