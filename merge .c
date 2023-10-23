#include <stdio.h>

struct Node
 {
  int data;
  struct Node *next;
};


int main()
 {
  int n1, n2;
  printf("Enter the number of nodes in the first list: ");
  scanf("%d", &n1);

  printf("Enter the number of nodes in the second list: ");
  scanf("%d", &n2);

  struct Node *head1 = malloc(sizeof(struct Node));
  struct Node *head2 = malloc(sizeof(struct Node));

  head1->data = 0;
  head2->data = 0;

  struct Node *trav1 = head1;
  struct Node *trav2 = head2;

  for (int i = 0; i < n1; i++) 
  {
    int data;
    printf("Enter the data for node %d in the first list: ", i + 1);
    scanf("%d", &data);

    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    trav1->next = node;
    trav1 = trav1->next;
  }

  for (int i = 0; i < n2; i++) 
  {
    int data;
    printf("Enter the data for node %d in the second list: ", i + 1);
    scanf("%d", &data);

    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    trav2->next = node;
    trav2 = trav2->next;
  }

  merge(head1, head2);

  struct Node *trav = head;
  while (trav)
   {
    printf("%d\n", trav->data);
    trav = trav->next;
  }

  return 0;
}


void merge(struct Node *head1, struct Node *head2) 
{
  struct Node *temp = head1;
  struct Node *trav2 = head2;

  while (temp && trav2) 
  {
    if (temp->data < trav2->data) 
	{
      temp = temp->next;
    } 
	else
	 {
      struct Node *next = trav2->next;
      trav2->next = temp;
      temp = trav2;
      trav2 = next;
    }
  }

  if (temp)
   {
    temp->next = trav2;
  }  
  else
   {
    temp = trav2;
  }

  head = temp;
}


