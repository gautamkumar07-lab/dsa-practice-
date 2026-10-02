#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

// Insertion operation
void insert() {
    int value;

    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("%d inserted into queue.\n", value);
}

// Deletion operation
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return;
    }

    printf("%d deleted from queue.\n", queue[front]);
    front++;

    // Reset queue when it becomes empty
    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

// Display operation
void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements are: ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Insertion (Enqueue)\n");
        printf("2. Deletion (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}