// code for merge algo in  c

#include <stdio.h>
#define max 8

int a[max];

void merge_sort(int low, int high);
void merge(int low, int mid, int high);

int main()
 {
    int i;

    printf("Enter the array elements:\n");
    for (i = 0; i < max; i++) 
	{
        scanf("%d", &a[i]);
    }

    merge_sort(0, max - 1);

    printf("Sorted array is:\n");
    for (i = 0; i < max; i++) 
	{
        printf("%d\t", a[i]);
    }

    return 0;
}

void merge_sort(int low, int high) 
{
    if (low < high) 
	{
        int mid = (low + high) / 2;

        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

void merge(int low, int mid, int high) 
{
    int temp[max];
    int i = low;
    int k = low;
    int j = mid + 1;

    while ((i <= mid) && (j <= high)) 
	{
        if (a[i] <= a[j])
		 {
            temp[k++] = a[i++];
        }
		 else
		  {
            temp[k++] = a[j++];
        }
    }

    while (i <= mid) 
	{
        temp[k++] = a[i++];
    }

    while (j <= high) 
	{
        temp[k++] = a[j++];
    }

    for (i = low; i <= high; i++) 
	{
        a[i] = temp[i];
    }
}

