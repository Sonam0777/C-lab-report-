/*Write a C program to generate pyramid of numbers.
1
1 2
1 2 3
1 2 3 4*/

#include <stdio.h>
int main()
{
  int n,i,j;  

  printf("enter the number of rows ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}