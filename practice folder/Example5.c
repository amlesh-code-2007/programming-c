// Write a program to insert a node at beginning, mid,,end and deletion on random position and dispaly of a given singly linked list....

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(struct Node **head, int value, int position)
{
    if (position < 0)
    {
        printf("Invalid position!\n");
        return;
    }
    if (position == 0)
    {
        insertAtBeginning(head, value);
        return;
    }
    struct Node *temp = *head;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position out of range.\n");
        return;
    }
    struct Node *newNode = createNode(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    struct Node *temp = *head;

    if (position == 0)
    {
        *head = temp->next;
        free(temp);
        printf("Node deleted from position %d.\n", position);
        return;
    }

    struct Node *prev = NULL;
    for (int i = 0; i < position && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position out of range.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted from position %d.\n", position);
}

void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    int choice, value, position;

    while (1)
    {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at Middle (position)\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Position\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert at beginning: ");
            scanf("%d", &value);
            insertAtBeginning(&head, value);
            break;
        case 2:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter position (0 for beginning): ");
            scanf("%d", &position);
            insertAtPosition(&head, value, position);
            break;
        case 3:
            printf("Enter value to insert at end: ");
            scanf("%d", &value);
            insertAtEnd(&head, value);
            break;
        case 4:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            break;
        case 5:
            displayList(head);
            break;
        case 6:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
