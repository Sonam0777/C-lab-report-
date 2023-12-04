// Write a C Program to find whether given matrix is symmetric or not .

#include <stdio.h>

int main()
{
    int r, c;
    printf("enter no of rows ");
    scanf("%d", &r);
    printf("enter no of columns ");
    scanf("%d", &c);

    int a[100][100], i, j;

    printf("enter elements of matrix ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("1st matrix is \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    /*printf("transpose of matrix is \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }*/
    int sym = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[j][i] != a[i][j])
            {
                sym = 0;
                break;
            }
        }
        if (sym == 0)
        {
            break;
        }
    }
    if (sym == 1)
        printf("the matrix is symmetric");
    else
        printf("the matrix is not symmetric");
    return 0;
}
