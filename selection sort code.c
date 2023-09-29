//  code for selection sort in c language by burhan u din malik 

#include<stdio.h>
void selection(int a[], int n)
{
	int i,j,small,temp ;
	
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[small])
			{
				small=j;
		    }
				temp=a[small];
				a[small]=a[i];
				a[i]=temp;
			
		}
	}
}

int main()
{
	int a[50], i, n ;
	printf("enter array size \n");
	scanf("%d",&n);
	
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
    }
    
    selection(a,n);
    
    printf("sorted array is as\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\t",a[i]);
	}
	
	return  0;
}
