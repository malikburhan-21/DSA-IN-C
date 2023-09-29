#include <stdio.h>

void bubble_sort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int i,n,a[100];
     printf("enter array size \n");
     scanf("%d",&n);
     printf("enter array elements\n");
     for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
     
    bubble_sort(a, n);
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

