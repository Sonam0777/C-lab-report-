//Write a C program to read the elements of 1-d array using pointers and print them in reverse order using pointers.
#include <stdio.h>

int main()
{
    int a[100];
    int n;
    printf("enter nth element ");
    scanf("%d",&n);

    printf("enter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("before reversing the elements \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    int *ptr = &a[n-1];
    printf("\nafter reversing the elements \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", *ptr);
        *ptr--;
    }
    return 0;
}