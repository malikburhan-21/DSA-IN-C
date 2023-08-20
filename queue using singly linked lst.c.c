#include <stdio.h>
#include <stdlib.h> // Include this header for malloc and free

void enqueue();
void dequeue();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

int main()
{
    int n;
    while (1)
    {
        printf("Enter\n1 for enqueue\n2 for dequeue\n3 for display\n");
        scanf("%d", &n);
        if (n == 1)
            enqueue();
        else if (n == 2)
            dequeue();
        else if (n == 3)
            display();
        else
            break;
    }
}

void enqueue()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter element in the queue: ");
    scanf("%d", &temp->data); // Corrected data input
    temp->next = NULL;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = front;
    front = front->next;
    printf("Deleted item = %d\n", temp->data);
    free(temp);
}

void display()
{
    struct node *trav;
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        trav = front;
        printf("Queue elements: ");
        while (trav != NULL)
        {
            printf("%d\t", trav->data);
            trav = trav->next;
        }
        printf("\n");
    }
}

