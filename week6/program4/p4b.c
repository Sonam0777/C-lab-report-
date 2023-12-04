/*Write a C program to generate pattern.
    1
   232
  34543
 4567654
567898765*/

#include <stdio.h>
int main()
{
    int n,i,j,c;

    printf("enter number of row you want to print ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++) //n=5
       {
           printf(" ");
       } 
       c=i;
       for(j=1;j<=i;j++)
       {
        printf("%d",c);
        c++;
       }
       c=c-2;
       for(j=1;j<i;j++)
       {
        printf("%d",c);
        c--;
       }
       printf("\n");
    }
    return 0;

}