//Write a C Program to find the number of non repeated elements in an array.


#include <stdio.h>

int main()
{
    int n;
    printf("enter the size of an array ");
    scanf("%d",&n);

    int a[100];
    int b[100];
    int count =0;

    printf("enter the elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=1;
    }

    printf("the array elements are ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            b[i]=0;
            b[j]=0;
            }
        }
    }

    printf("\n non-repeated elements in an array ");
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            printf("%d\t",a[i]);
            count++;
        }
    }
    printf("\n number of non repeated elements %d\n",count);
    return 0;
}