#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

struct Queue {
    int front;
    int rear;
    int capacity;
    int* arr;

    Queue(int size = 100) {
        capacity = size;
        front = 0;
        rear = -1;
        arr = new int[capacity];
    }



    
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = item;
    }


    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1; 
        }
        return arr[front++];
    }

  
    int peek()  {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

   
    bool isEmpty()  {
        return front > rear;
    }


    bool isFull() {
        return rear == capacity - 1;
    }
};

#endif 

