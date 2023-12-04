//Write a C Program to find 2 nd largest and 2 nd smallest element in an array.

#include <stdio.h>

int main()
{
    int n,a[100];

    printf("enter how many array elements you want to input ");
    scanf("%d",&n);

    printf("\nenter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\narray elements are ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    

    //sorting array

    for(int i=0;i<n-1;i++)
    {
        int temp,flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
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
    printf("\nthe second smallest element is %d",a[n-2]);
    printf("\nthe second largest is %d",a[1]);
    return 0;
}
