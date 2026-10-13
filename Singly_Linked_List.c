#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}

void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void insertAtPosition(struct Node** head_ref, int position, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    if (position == 1) {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }

    struct Node* temp = *head_ref;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printf("Initial list (Insert at End): ");
    displayList(head);

    insertAtBeginning(&head, 10);
    printf("After inserting 10 at beginning: ");
    displayList(head);

    insertAtEnd(&head, 40);
    printf("After inserting 40 at end: ");
    displayList(head);

    insertAtPosition(&head, 3, 25);
    printf("After inserting 25 at position 3: ");
    displayList(head);

    return 0;
}
