//Write a C Program to insert a sub string into main string at a given position.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[100],b[100];
    
    printf("enter any stiring ");
    scanf("%s", a);

    printf("enter sub string ");
    scanf("%s", b);
    

    int n;
    printf("enter the position to where sub string should be insertd ");
    scanf("%d",&n);

    int l1,l2,i;
    l1=strlen(a);
    l2=strlen(b);

    for(i=l1;i>=n;i--)
    {
        a[i+l2]=a[i];
    }

    for(i=0;i<l2;i++)
    {
        a[n+i]=b[i];
    }
    printf("\n after insert string: %s", a);
    return 0;
}