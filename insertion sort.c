#include<stdio.h>
void insert(int a[], int n)
{
	int i,j,item;
	for(i=1;i<n;i++)
	{
		item=a[i];
		j=i-1;
		while(j>=0 && item<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;  // or j--
		}
		a[j+1]=item;
	}
}

int main()
{
	int a[50],i, n;
	printf("enter size of the array\n");
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	insert(a,n);
	printf("array after sorting is as \n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return  0;
}
