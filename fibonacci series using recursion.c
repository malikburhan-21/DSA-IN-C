//    W.A.P in c using " recursion "  to generate a fibonacci series upto 'n' number of terms

#include<stdio.h>
void fibo(int);
main()
{
	int n;
	printf("enter no.of terms\n");
	scanf("%d",&n);
	printf(" 0 \n 1\n");
	fibo(n-2);
}

void fibo(int n)
{
	static int a=0,b=1,c;
	if(n>0)
	{
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",c);
	fibo(n-1);
    }
}
