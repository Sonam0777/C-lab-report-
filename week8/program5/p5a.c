//Write a C Program to find largest and smallest numbers in a given list of integers.

#include <stdio.h>

int main()
{
    int n;
    printf("enter size of an array ");
    scanf("%d",&n);

    int a[100];

    printf("enter the array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("the array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     int temp;
    for(int i=0;i<n-1;i++) //iteration
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]) //task
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
            if(flag==0)
            break;
    }

    printf("\nthe smallest elements is : %d\n",a[0]);
    printf("\nthe largest elements is : %d\n",a[n-1]);
    return 0;

    
}