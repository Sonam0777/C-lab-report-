//Write a C program to print the repeated elements with frequency count in an array.

#include <stdio.h>

int main()
{
    int i,n,j,a[50],b[50],c=0;
    printf("enter how many elements you want to print ");
    scanf("%d",&n);
    
    printf("enter the elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements are ");
    for(i=0;i<n;i++)
    { 
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                c++;
                a[j]=-1;
                }
            }
        }
        b[i]=c;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("no of %d is %d\n",a[i],b[i]);
        }
    }
    return 0;
}