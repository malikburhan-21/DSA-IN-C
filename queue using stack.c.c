#include<stdio.h>
#define max 5
int queue[max];
int F = -1, R = -1;

void enqueue();
void dequeue();
void display();

void main()
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
    int item;
    if (R == max - 1)
    {
        printf("Queue is full (overflow)\n");
    }
    else if (F == -1)
    {
        F = R = 0;
        printf("Enter element to enqueue: ");
        scanf("%d", &item);
        queue[R] = item;
    }
    else
    {
        R++;
        printf("Enter element to enqueue: ");
        scanf("%d", &item);
        queue[R] = item;
    }
}

void dequeue()
{
    int item;
    if (F == -1)
    {
        printf("Queue is empty (underflow)\n");
        return;
    }
    else if (F == R)
    {
        item = queue[F];
        printf("Deleted item = %d\n", item);
        F = R = -1;
    }
    else
    {
        item = queue[F];
        printf("Deleted item = %d\n", item);
        F++;
    }
}

void display()
{
    int i;
    if (F == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (i = F; i <= R; i++)
        {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

