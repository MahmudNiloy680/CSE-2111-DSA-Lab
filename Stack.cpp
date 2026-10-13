#include <bits/stdc++.h>
using namespace std;
#define MAX 5
class Stack {
private:
    int items[MAX];
    int topIndex;

public:
    Stack() { topIndex = -1; }
    void push(int value) {
        if (topIndex == MAX - 1)
            cout << "Stack Overflow\n";
        else {
            items[++topIndex] = value;
            cout << "Pushed: " << value << "\n";
        }
    }
    int pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        else
            return items[topIndex--];
    }
    int peek() {
        if (topIndex == -1) {
            cout << "Stack Empty\n";
            return -1;
        }
        else
            return items[topIndex];
    }
    bool isEmpty() { return topIndex == -1; }
    int size() { return topIndex + 1; }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top: " << s.peek() << "\n";
    cout << "Size: " << s.size() << "\n";
    cout << "Popped: " << s.pop() << "\n";
    cout << "Empty? " << (s.isEmpty() ? "Yes" : "No") << "\n";
    return 0;
}
