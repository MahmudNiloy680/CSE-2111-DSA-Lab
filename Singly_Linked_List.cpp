#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
private:
    Node *head;

public:
    LinkedList() { head = nullptr; }
    void insertAtBeginning(int val) {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << val << " at beginning\n";
    }
    void insertAtEnd(int val) {
        Node *newNode = new Node(val);
        if (!head) {
            head = newNode;
        }
        else {
            Node *temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Inserted " << val << " at end\n";
    }
    void insertAtPosition(int val, int pos) {
        if (pos < 1)
            return;
        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 1; temp && i < pos - 1; i++)
            temp = temp->next;
        if (!temp) {
            cout << "Position out of bounds\n";
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Inserted " << val << " at position " << pos << "\n";
    }
    void display() {
        Node *temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
int main() {
    LinkedList list;
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtBeginning(10);
    list.insertAtPosition(25, 3);
    cout << "List: ";
    list.display();
    return 0;
}
