#include<stdio.h>
void decTohexa(int);
int main()
{
	int n;
	printf("enter dec number to convert it into hexadecimal\n");
	scanf("%d",&n);
	decTohexa(n);
	return  0;
}

void decTohexa(int n)
{
	int temp;
	if(n==0)
	return;
	decTohexa(n/16);
	temp=(temp=n%16) >=10 ? temp+55 : temp+48;
	printf("%c",temp);
	
}

