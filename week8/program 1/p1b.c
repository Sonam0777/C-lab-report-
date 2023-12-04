//Write a C Program to find multiplication of two matrices.

#include <stdio.h>
#define M 3
#define N 3
int main()
{
    int a[100][100],b[100][100],i,j,product[100][100];

    printf("enter the 1st matrix elements ");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nfirst matrix is\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("enter the 2nd matrix elements ");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nfirst matrix is\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            product[i][j]=a[i][j]*b[i][j];
        }
    }

    printf("multiplication is \n");

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

    return 0;
}