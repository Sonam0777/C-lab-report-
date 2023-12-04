//Write a C Program to print 2-D array using pointers.

#include <stdio.h>

int main()
{
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2-D array
    int matrix[rows][cols];

    // Input elements into the 2-D array
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the 2-D array using pointers
    printf("\nMatrix elements are:\n");
    int *ptr = &matrix[0][0]; // Pointer to the first element of the 2-D array

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(ptr + i * cols + j));
        }
        printf("\n");
    }

    return 0;
}
