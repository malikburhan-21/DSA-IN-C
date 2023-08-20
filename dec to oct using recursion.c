//  W.A.P in c using " recursion " to convert decimal number to octal .  input should be taken from the user 

#include<stdio.h>
void dec_to_oct(int);
int main()
{
	int n;
	printf("enter decimal for conversion to octal\n ");
	scanf("%d",&n);
	dec_to_oct(n);
	return 0;
}

void dec_to_oct(int n)
{
	if(n>0)
	{
	dec_to_oct(n/8);
	printf("%d",n%8);
    }
    
}

