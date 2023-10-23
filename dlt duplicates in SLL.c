// deletion of double elements in singly linked list

#include<stdio.h>
#include<stdlib.h>
void create();
void  view();
void dltdup();
 
//  -----------------------------------------------------------------------------------------------------------------------

struct node
{
   int data ;
   struct node *next;	
};

      struct node *head=NULL,*tail=NULL ;
      
//  ----------------------------------------    main  start       -------------------------------------------------

main()
{
	int n;
	while(1)
	{
	printf("enter\n 1 for create\n 2 for view\n 3 for deleting the duplicates\n");
	scanf("%d",&n);
	
    if(n==1)
    {
    	 create();
	}
         
    else if(n==2)
    {
         view();	
	}
	
	else if(n==3)
	{
		dltdup();
	}
	else
	    break;
    
    }
  
}


// ----------------------------------------------   main  end      --------------------------------------------    

   void create()
   { 
     int n,i;
    struct node *temp;
   	printf("enter no of nodes u want to create\n\n");
   	scanf("%d",&n);

   	
   	for(i=1;i<=n;i++)
   	{
   	  temp=(struct node*)malloc(sizeof(struct node));
   	  printf("enter data in the node\n");
   	  scanf("%d",&temp->data);
   	  temp->next=NULL;
	
	if(head==NULL)
	{
		head=temp;
		tail=temp;
		
	}
	
	else
	{
		tail->next=temp;
		tail=temp;
	}
 }
 
   }
   
//------------------------------------------  create  end   ----------------------------------------------------- 
   
   void  view()
   {
   	
   	struct node *trav;
   	trav=head;
   	while(trav!=NULL)
   	{
   	    printf("%d",trav->data);
		   trav=trav->next;	
	}
	printf("\n\n");
   }
   
 //-----------------------------------------    view  end     -------------------------------------------------------
 
 void dltdup() 
 {
    struct node* trav ;
	trav= head;

    while(trav != NULL && trav->next != NULL) 
	{
        struct node* trav1;
		trav1= trav;

        while (trav1->next != NULL)
		 {
            if (trav->data == trav1->next->data)
			 {
                struct node* trav2= trav1->next;
                trav1->next = trav2->next;
                free(trav2);
            } 
			else 
			{
                trav1 = trav1->next;
            }
        }

        trav = trav->next;
    }
}

  
 
