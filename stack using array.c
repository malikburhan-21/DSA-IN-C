//                              W.A.P in C to implement " STACK " using  array

#include<stdio.h>
#define max 3
void push();
void pop();
void view();
int stack[max];
int top=-1;

main()
{
	int n;
	while(1)
	{
		printf("\nenter\n1 for push\n2 for pop\n3 for view\n");
		scanf("%d",&n);
		if(n==1)
		    push();
		    
	    else if(n==2)
	        pop();
	        
	    else if(n==3)
	          view();
	    else 
	      break;

	}
}

void push()
{
	if(top==max-1)
	{
		printf("over-flow\n");
	}
	
	else 
	{
		int item;
		top=top+1;
		printf("enter data\n\n");
		scanf("%d",&stack[top]);
		 
	}
}

void pop()
{
	if(top==-1)
	{
		printf("\n under-flow \n");
	}
	
	else
	{
		int item;
		item=stack[top];
		printf("deleted item is %d",item);
		top-- ; 
	}
}


void view()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
		
	}
	
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d\n",stack[i]);
		}
	}
}



