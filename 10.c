#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// 1. Insertion at Beginning
void insertBeginning() {
    int value;
    struct Node *newNode;

    printf("Enter value: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("Node inserted at beginning.\n");
}

// 2. Insertion at End
void insertEnd() {
    int value;
    struct Node *newNode, *temp;

    printf("Enter value: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Node inserted at end.\n");
}

// 3. Insertion after a given node
void insertAfterNode() {
    int value, key;
    struct Node *newNode, *temp;

    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Enter the node value after which you want to insert: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Given node not found.\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;

    printf("Node inserted successfully.\n");
}

// 4. Traversing the linked list
void traverse() {
    struct Node *temp;

    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    temp = head;

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Insertion at Beginning\n");
        printf("2. Insertion at End\n");
        printf("3. Insertion after a Given Node\n");
        printf("4. Traverse Linked List\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertBeginning();
                break;

            case 2:
                insertEnd();
                break;

            case 3:
                insertAfterNode();
                break;

            case 4:
                traverse();
                break;

            case 5:
                printf("Program terminated.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}