#include <stdio.h>
#define max 5
int queue[max];
int F = -1, R = -1;

void enqueue();
void dequeue();
void display();

int main() {
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
    return 0;
}

void enqueue()
 {
    int item;
    if ((R + 1) % max == F) 
	{
        printf("----- Overflow -----\n");
    } else if (F == -1) 
	{
        F = R = 0;
    } else 
	{
        R = (R + 1) % max;
        printf("\nEnter element in queue: ");
        scanf("%d", &item);
        queue[R] = item;
    }
}

void dequeue()
 {
    int item;
    if (F == -1)
	 {
        printf("------ Underflow ------\n");
        return;
    } else if (F == R)
	 {
        item = queue[F];
        printf("Deleted item = %d\n", item);
        F = R = -1;
    } else 
	{
        item = queue[F];
        printf("Deleted item = %d\n", item);
        F = (F + 1) % max;
    }
}

void display() 
{
    int i = F;
    if (F == -1)
	 {
        printf("--- Empty queue ---\n");
    } else {
        while (i != R) 
		{
            printf("%d\t", queue[i]);
            i = (i + 1) % max;
        }
        printf("%d\n", queue[R]);
    }
    
}

