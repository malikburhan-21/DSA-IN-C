//  w.a.p in c using ' recursion ' to generate the " nth " term of fibonacci series . input should be taken from the user

#include<stdio.h>
int fibo(int);
int main()
{
	int n , ans ;
	printf("enter term\n");
	scanf("%d",&n);
	ans=fibo(n);
	printf("term=%d",ans);
}

int fibo(int n)
{
	if(n==1)
	  return 0;
	  
	else if(n==2)
	   return  1;
	
	else if(n==3)
	    return  1;
	
	else 
	     return fibo(n-1) + fibo(n-2) ;
}

