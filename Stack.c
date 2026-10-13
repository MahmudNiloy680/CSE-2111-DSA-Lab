#include <stdio.h>

#define MAX 5
int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int peek() {
    if (isEmpty()) {
        return -1;
    }
    return stack[top];
}

int main() {
    printf("isEmpty: %d\n", isEmpty());

    push(10);
    push(20);
    push(30);

    printf("Top element (Peek): %d\n", peek());
    printf("Popped element: %d\n", pop());
    printf("Top element (Peek): %d\n", peek());
    printf("isFull: %d\n", isFull());

    return 0;
}
