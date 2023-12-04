//Write a C Program to read and print elements of 1-D array using calloc() memory allocation function.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;

    printf("enter nth array elements ");
    scanf("%d",&n);

    arr=(int *)calloc(n, sizeof(int));

    int i;
    printf("\nEnter arry elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nArray elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}