/*Write a C program to generate pattern

   *
  *A*
 *A*A*
*A*A*A*  */

#include <stdio.h>
int main()
{
    int n,i,j;
    
    printf("enter number of rows ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            if(j==1)
            printf("*");
            else
            printf("A*");
        }
        printf("\n");
    }
    return 0;
}