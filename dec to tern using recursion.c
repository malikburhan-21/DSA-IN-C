//   W.A.P in c to convert decimal number to ternary  using " recursion".  input should be taken from the user 

#include<stdio.h>
void binary(int);
int main()
{
	int n;
	printf("enter decimal number for conversion to binary\n");
	scanf("%d",&n);
	binary(n);
	return 0;
}

void binary(int n)
{
	if(n==0)
	printf("0");
	
	else if(n==1)
	printf("1");
	
	else
	{
		binary(n/3);
		printf("%d",n%3);
	}
}
