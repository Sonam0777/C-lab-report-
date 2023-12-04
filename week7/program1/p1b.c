//Write a C Program to find binary equivalent of a given decimal number using recursive functions.

#include <stdio.h>

int bin(int);

int main()
{
    int n,z;
    printf("enter decimal number ");
    scanf("%d",&n);
    printf("the corresponding binary number is ");
    z=bin(n);
    return 0;
}

int bin(int a)
{
    if(a>0)
    {
        bin(a/2);
        printf("%d",a%2);
    }
}