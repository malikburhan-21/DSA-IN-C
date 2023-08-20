#include<stdio.h>
void toh(int,char,char,char);
int main()
{
	int n;
	char A,B,C;
	printf("enter no of disc\n");
	scanf("%d",&n);
	toh(n,'A','B','C');
	return  0;
}

void toh(int n,char beg,char aux,char end)
{
	if(n<=0)
	    printf("\n illegal");
	
	else if(n==1)
	    printf("disc move from %c to %c\n",beg,end);
	    
	else
	{
		toh(n-1,beg,end,aux);
		toh(1,beg,aux,end);
		toh(n-1,aux,beg,end);
	}
	
}
