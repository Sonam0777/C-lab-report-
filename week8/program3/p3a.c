//Write a C Program to put odd and even elements of given arrays into two separate arrays.

#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d",&n);

    int a[100],even[100],odd[100];
    int evenCount=0,oddCount=0;


    printf("enter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
        {
            even[evenCount++]=a[i];
        }
        else
        {
            odd[oddCount++]=a[i];
        }
    }
    

    printf("Even Numbers: ");
    for(int i=0;i<evenCount;i++)
    {
        printf("%d ",even[i]);
    }

    printf("\nOdd Numbers: ");
    for(int i=0;i<oddCount;i++)
    {
        printf("%d ",odd[i]);
    }
    
    return 0;
}