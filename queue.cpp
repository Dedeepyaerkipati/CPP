 #include "Queue.h" 

int main() {
    Queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front element: " << q.peek() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front element after dequeue: " << q.peek() << endl;
    return 0;
}
