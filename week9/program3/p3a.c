//Write a C Program to read and print the elements of 1-D array using calloc() memory allocation function and reallocate memory for the array by increasing the size of the array, read and print the elements of reallocated array.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n;

    printf("enter the size of an array ");
    scanf("%d",&n);

    arr=(int *)calloc(n, sizeof(int));

    if(arr==NULL)
    {
        printf("memory allocation failed. Exiting program ");
        return 1;
    }

    int i;
    printf("enter %d element :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\noriginal array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    int newSize;
    printf("\nEnter the new size of the array ");
    scanf("%d",&newSize);

    if (newSize < n) {
        printf("Invalid new size. Exiting program.\n");
        free(arr);
        return 1;
    }

    arr=(int *)realloc(arr,newSize*sizeof(int));

    if(arr == NULL)
    {
        printf("memeory allocation faild. exiting program");
        return 1;
    }

    printf("enter %d new elements:\n",newSize-n);
    for(i=n;i<newSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nReallocated Array\n");
    for(i=0;i<newSize;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}