#include <bits/stdc++.h>
using namespace std;
#define MAX 5
class Queue {
private:
    int items[MAX];
    int front, rear, itemCount;

public:
    Queue() {
        front = 0;
        rear = -1;
        itemCount = 0;
    }
    void enqueue(int value) {
        if (itemCount == MAX)
            cout << "Queue Overflow\n";
        else {
            rear = (rear + 1) % MAX;
            items[rear] = value;
            itemCount++;
            cout << "Enqueued: " << value << "\n";
        }
    }
    int dequeue() {
        if (itemCount == 0) {
            cout << "Queue Underflow\n";
            return -1;
        }
        else {
            int val = items[front];
            front = (front + 1) % MAX;
            itemCount--;
            return val;
        }
    }
    int peek() {
        if (itemCount == 0) {
            cout << "Queue Empty\n";
            return -1;
        }
        else
            return items[front];
    }
    bool isEmpty() { return itemCount == 0; }
    int size() { return itemCount; }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front: " << q.peek() << "\n";
    cout << "Size: " << q.size() << "\n";
    cout << "Dequeued: " << q.dequeue() << "\n";
    cout << "Empty? " << (q.isEmpty() ? "Yes" : "No") << "\n";
    return 0;
}
