#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isFull() {
    return rear == MAX - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    int value = queue[front];
    front++;
    return value;
}

int peek() {
    if (isEmpty()) {
        return -1;
    }
    return queue[front];
}

int main() {
    printf("isEmpty: %d\n", isEmpty());

    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Front element (Peek): %d\n", peek());
    printf("Dequeued element: %d\n", dequeue());
    printf("Front element (Peek): %d\n", peek());
    printf("isFull: %d\n", isFull());

    return 0;
}
