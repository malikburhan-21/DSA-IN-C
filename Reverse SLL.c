//     W.A.P in c to reverse a singly linked list   

#include<stdio.h>
#include<stdlib.h>

void create();
void view();
void reverse();  

struct node 
{
   int data ;
   struct node *next;	
};

struct node *head=NULL, *tail=NULL;

int main()
{
    int n;
    while(1)
    {
        printf("Enter\n1 for create\n2 for view\n3 for reverse\n");
        scanf("%d", &n);
        
        if(n == 1)
            create();
        else if(n == 2)
            view();
        else if(n == 3)
            reverse();
        else 
            break;
    }
}

// ------------------------------------------   create   start    ------------------------------------------------------

void create()
{
    int n, i;
    printf("Enter the number of nodes you want to create\n ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for the node ");
        scanf("%d", &temp->data);
        temp->next = NULL;
        
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
}

//  ------------------------------------------------- create  end  - --------------------------------------------------

void view()
{
    struct node *trav;
    trav = head;
    
    while(trav != NULL)
    {
        printf("%d ", trav->data);
        trav = trav->next;
    }
    
    printf("\n\n");
}

//  ---------------------------------------------  view  end   ----------------------------------------------------------  

void reverse()
{
    struct node *prev, *current , *nxt;
    prev=NULL;
    current =head;
    nxt=current->next;
    while(current != NULL)
    {
        current->next = prev; // Reverse the link 
        prev = current;
        current = nxt;
        if(nxt!=NULL)
        {
        	nxt=nxt->next;
		}
    }

    head = prev;  
}



// ----------------------------------------------  reverse   end    ------------------------------------------------
