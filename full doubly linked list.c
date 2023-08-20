/* 
    doubly linked list having functions like----->   create , view  , insert(begin,middle,end) ,
                                                     
    delete(begin.middle,end).
    
*/

#include<stdio.h>
#include<stdlib.h>
//  -----------------------------------------    main   functions   ------------------------------------------------------

void create();
void view();
void insert();
void delete();
//---------------------------------------------------------------------------------------------------------------------

void beg();
void mid();
void end();

// --------------------------------------   functions of delete option   -----------------------------------------------

void begin();
void middle();
void atend();

// --------------------------------------------------------------------------------------------------------------------

struct node
{
	struct node *prev;
	int data ;
	struct node *next;
};
   struct node *head=NULL,*tail=NULL;

//------------------------------------------   start   main       --------------------------------------------------

main()
{
	int n;
	while(1)
	{
	printf("enter \n1 for create\n2 for view\n3 for insert\n4 for delete\n ");
	scanf("%d",&n);
    
    if(n==1)
         create();
         
    else if(n==2)
          view();
          
    else if(n==3)
	      insert();   
	      
	else if(n==4)
	       delete();    
	       
	else 
	     break;
}

}


//  -------------------------------------     end   of   main    ----------------------------------------------------



void create()
{
	int n,i;
	struct node *temp;
	printf("enter no. of nodes u want to create\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->prev=NULL;
		printf("enter data for the node\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
	
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		 temp->prev=head;
		 temp->next=NULL;
		 tail->next=temp;
		 tail=temp;
	}
}
}

//--------------------------------------- ----  end    of    create   -----------------------------------------------------

void view()
{
	struct node *trav;
	trav=head;
	while(trav!=NULL)
	{
		printf("%d",trav->data);
		trav=trav->next;
	}
    printf("\n");
    
}

// ---------------------------------------     end    of    view     ----------------------------------------------------


void insert()
{
	int n;
	printf("enter\n1 at beginning\n2 at mid \n 3 at end\n");
	scanf("%d",&n);
	if(n==1)
	      beg();
	
	else if(n==2)
	       mid();
	       
	else if(n==3)
	        end();
	        
}

void beg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	printf("enter data for the node\n");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
}


void mid()
{
	int item;
	struct node *trav,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data of that node after which u want to insert new-node\n");
	scanf("%d",&item);
	trav=head;
	while(trav->data!=item)
	{
		trav=trav->next;
	}
	  temp->prev=trav;
	printf("enter data for the node\n");
	scanf("%d",&temp->data);
    temp->next=trav->next;
   
     trav->next=temp;
    
}

void end()
{
	 struct node *temp,*trav;
	 temp=(struct node*)malloc(sizeof(struct node));
	  trav=head;
	  while(trav->next!=NULL)
	  {
	  	trav=trav->next;
	  }
	  temp->prev=trav;
	  printf("enter data for the  node\n");
	  scanf("%d",&temp->data);
	  trav->next=temp;
	  tail=temp;
}


//   -------------------------------------      end   of    insert    -------------------------------------------------

void delete()
{
	int n;
	printf("enter\n1 to delete at beg\n 2 at mid\n3 at end\n");
	scanf("%d",&n);
	if(n==1)
	      begin();
	 
	else if(n==2)
	       middle();
		       
    else if(n==3)
           atend();
}

void begin()
{
	struct node *trav;
	trav=head;
	if(head==NULL)
	      printf("empty\n");
	      
	else
	{
		head=trav->next;
		head->prev=NULL;
		free(trav);
	}
}


void middle()
{
	int item;
	struct node *trav;
	printf("enter data of that node after which u want to delete \n");
	scanf("%d",&item);
	trav=head;
	while(trav->data!=item)
	{
		trav=trav->next;
	}
		 
	trav->next->next->prev=trav;
     trav->next=trav->next->next;
	 free(trav->next);
	
}


void atend()
{
	struct node *trav,*trav1;
	trav=head;
	while(trav->next!=NULL)
	{
		trav1=trav;
		trav=trav->next;
	}
	trav1->next=NULL;
	tail=trav1;
	free(trav);
}
    
//  -----------------------------------------   end   of    delete    ---------------------------------------------------

