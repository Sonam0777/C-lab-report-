//Write a C program to find sum of main and opposite diagonal elements of a matrix using functions.

#include <stdio.h>

int sumdiagonal(int a[10][10],int r,int c);
int main()
{
    int r,c;
    printf("enter no of rows ");
    scanf("%d",&r);
    printf("enter no of column ");
    scanf("%d",&c);

    int a[10][10],i,j;
    printf("enter the matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    int z= sumdiagonal(a,r,c);
    printf("sum of main and opposite diagonal is %d",z);
    return 0;
}

int sumdiagonal(int a[10][10],int r,int c)
{
    int maindiagonal = 0;
    int oppositediagonal = 0;
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                maindiagonal+=a[i][j];
            }
            if(i+j==r-1)
            {
                oppositediagonal+=a[i][j];
            }
        }
    }
    return maindiagonal+oppositediagonal;
}