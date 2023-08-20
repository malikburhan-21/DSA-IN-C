/* 
    singly linked list having functions like----->   create , view  , insert(begin,middle,end) ,
                                                     
    delete(begin.middle,end).
    
*/

#include<stdio.h>
#include<stdlib.h>
void create();
void  view();
void insert();
void delete();
// -------------------------------------  functions of insert   ----------------------------------------------------------
void beg();
void middle();
void end();
// -----------------------------------------------------------------------------------------------------------------------

// ----------------------------------   functions of delete     ----------------------------------------------------------
void begin();
void mid();
void atend();
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
	printf("enter\n 1 for create\n 2 for view\n3 for insert\n4 for delete\n");
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
	        insert();
	        
    else if(n==4)
            delete();
	        
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
  
   void insert()
   {
   	       int n;
   	     printf("enter\n to insert at beg\n2 at middle\n3 for at end\n");
   	     scanf("%d",&n);
   	     
   	     if(n==1)
   	           beg();
   	           
   	     else if(n==2)
   	           middle();
   	        
   	      else if(n==3) 
   	             end();
   	             
    }
    
    
    
void beg()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data for node\n");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
}



void middle()
{
	int item;
	struct node *trav,*temp;
	printf("enter data of that node after which u want to insert new node\n");
	scanf("%d",&item);
	trav=head;
	while(trav->data!=item)
	{
		trav=trav->next;
		
	}
	 
	 temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data for the node\n");
		scanf("%d",&temp->data);
		temp->next=trav->next;
		trav->next=temp;
		if(trav==tail)
		{
			tail=temp;
	
	}
	
}
	
void end()
{
	 struct node *temp;
	 temp=(struct node*)malloc(sizeof(struct node));
	 printf("enter data for node\n");
	 scanf("%d",&temp->data);
	 temp->next=NULL;
	 tail->next=temp;
	 tail=temp;
}

// ----------------------------------------    insert   end    ----------------------------------------------


void delete()
{
	int n;
	printf("\n enter \n 1 to delete ist node\n 2 to delete at mid\n 3 to delete end node");
	scanf("%d",&n);
	
	 if(n==1)
   	           begin();
   	           
   	 else if(n==2)
		      mid(); 
			  
	 else if(n==3) 
			  atend();
	        
}

void begin()
{ 
     struct node *trav;
     if(head==NULL)
     {
     	printf("empty\n");
	 }
	 else
	 {
	    trav=head;
        head=trav->next;
        free(trav); 	
	 }
    
	
}

void mid()
{
	int item;
	struct node *trav ,*trav1;
	printf("enter data of that node after u want to delete node\n");
	scanf("%d",&item);
	trav=head;
     while(trav->data!=item)
     {
     	trav=trav->next;
	 }
	 trav1=trav->next;
	 trav->next=trav->next->next;
     free(trav1);
 
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
    free(trav);
    
}

// --------------------------------------------   delete  end      --------------------------------------------------
