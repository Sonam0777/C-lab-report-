//Write a C Program to read two elements dynamically using malloc() function and interchange the two numbers using call by reference.

#include <stdio.h>
#include <stdlib.h>

void interchange(int *num1,int *num2)
{
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}
int main()
{
    int *num1 = (int *)malloc(sizeof(int));
    int *num2 = (int *)malloc(sizeof(int));

    if(num1==NULL || num2==NULL)
    {
        printf("Meomory allocation failed ");
        return 1;
    }

    printf("enter the first number ");
    scanf("%d", num1);

    printf("enter the second number ");
    scanf("%d", num2);

    printf("\n Original NUmbers : \n");
    printf("first number %d",*num1);
    printf("\nsecodn number %d\n",*num2);

    interchange(num1,num2);
    printf("\nAfter swapping: \n");
    printf("first number %d",*num1);
    printf("\nsecond number %d",*num2);

    free(num1);
    free(num2);
    return 0;
}