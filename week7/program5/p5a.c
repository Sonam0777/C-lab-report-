//Write a C program to find sum of natural numbers using recursive function.

#include <stdio.h>

int sum(int);

int main()
{
    int n,z;
    printf("enter the nth term : ");
    scanf("%d",&n);
    z=sum(n);
    printf("sum of %d natural number is %d",n,z);
    return 0;
}

int sum(int a)
{
    if(a == 0)
    return 0;
    else
    return a + sum(a-1);
}
