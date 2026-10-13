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
    void insertAtEnd(int val) {
        Node *newNode = new Node(val);
        if (!head)
            head = newNode;
        else {
            Node *temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    void deleteFromBeginning() {
        if (!head) {
            cout << "List empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        cout << "Deleted " << temp->data << " from beginning\n";
        delete temp;
    }
    void deleteFromEnd() {
        if (!head) {
            cout << "List empty\n";
            return;
        }
        if (!head->next) {
            cout << "Deleted " << head->data << " from end\n";
            delete head;
            head = nullptr;
            return;
        }
        Node *temp = head;
        while (temp->next->next)
            temp = temp->next;
        cout << "Deleted " << temp->next->data << " from end\n";
        delete temp->next;
        temp->next = nullptr;
    }
    void deleteValue(int val) {
        if (!head) {
            cout << "List empty\n";
            return;
        }
        if (head->data == val) {
            deleteFromBeginning();
            return;
        }
        Node *temp = head;
        while (temp->next && temp->next->data != val)
            temp = temp->next;
        if (!temp->next) {
            cout << "Value " << val << " not found\n";
            return;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        cout << "Deleted value " << val << "\n";
        delete toDelete;
    }
    bool search(int val) {
        Node *temp = head;
        int pos = 1;
        while (temp) {
            if (temp->data == val) {
                cout << "Found " << val << " at position " << pos << "\n";
                return true;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value " << val << " not found\n";
        return false;
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
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    cout << "Initial List: ";
    list.display();
    list.search(30);
    list.search(50);
    list.deleteFromBeginning();
    list.deleteFromEnd();
    list.deleteValue(20);
    cout << "Final List: ";
    list.display();
    return 0;
}
