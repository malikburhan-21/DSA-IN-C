
//                            W.A.P in c to implement  " STACK " using linked list 

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* top = NULL;

void push();
void view();
void pop();

int main() 
{
    int n;
    while (1) 
	{
        printf("Enter:\n1 to push\n2 to view\n3 to pop\n");
        scanf("%d", &n);

        if (n == 1)
            push();
        else if (n == 2)
            view();
        else if (n == 3)
            pop();
        else
            break;
    }
    return 0;
}

void push() 
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (top == NULL)
	 {
        top = temp;
    } 
	else 
	{
        temp->next = top;
        top = temp;
    }
}

void view() 
{
    if (top == NULL)
	 {
        printf("Stack is empty.\n");
    } 
	else
	 {
        struct node* trav ;
		trav= top;
        printf("Elements in the stack:\n");
        while (trav != NULL)
		 {
            printf("%d\n", trav->data);
            trav = trav->next;
        }
    }
}

void pop()
 {
    if (top == NULL)
	 {
        printf("Stack is empty.\n");
    }
	 else 
	{
        struct node* trav;
		trav = top;
        top = top->next;
        free(trav);
    }
}

