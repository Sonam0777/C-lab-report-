//Write a C Program to find addition and subtraction of matrices using functions.

#include <stdio.h>
void sum(int r, int c, int a[100][100],int b[100][100], int s[100][100]);
void diff(int r, int c, int a[100][100],int b[100][100], int d[100][100]);

int main()
{
    int c,r;
    printf("enter rows ");
    scanf("%d",&r);
    printf("enter column ");
    scanf("%d",&c);

    int a[100][100],b[100][100],i,j,s[100][100],d[100][100];


    printf("enter first array elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("enter second array elements ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nfirst matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("\nsecond matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    sum(r,c,a,b,s);
    diff(r,c,a,b,d);

    printf("\nMatrix Sum:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Difference:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}

void sum(int r, int c, int a[100][100],int b[100][100], int s[100][100])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }

}

void diff(int r, int c, int a[100][100],int b[100][100], int d[100][100])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }

}
