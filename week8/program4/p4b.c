//Write a C Program to calculate the sum of elements of each row and each column in given matrix using functions.

#include <stdio.h>

int sumrow(int matrix[10][10], int row, int columns) {
    int sum = 0;
    for (int j = 0; j < columns; j++) {
        sum += matrix[row][j];
    }
    return sum;
}

int sumcolumn(int matrix[10][10], int rows, int column) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][column];
    }
    return sum;
}

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[10][10];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]); 
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Calculate and display the sum of elements in each row
    for (int i = 0; i < r; i++) {
        int rowSum = sumrow(a, i, c);
        printf("Sum of elements in row %d: %d\n", i, rowSum);
    }

    // Calculate and display the sum of elements in each column
    for (int j = 0; j < c; j++) {
        int columnSum = sumcolumn(a, r, j);
        printf("Sum of elements in column %d: %d\n", j, columnSum);
    }

    return 0;
}
