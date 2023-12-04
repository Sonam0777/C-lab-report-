//Write a C Program to find factorial of a given number using non recursive functions.

#include <stdio.h>

int fact(int);

int main()
{
    int n,z;
    printf("enter any number ");
    scanf("%d",&n);
    z=fact(n);
    printf("the factorial of the %d is %d",n,z);
    return 0;
}

int fact(int p) 
{
    int i,a=1;
    for(i=2;i<=p;i++)
    {
        a=a*i;
    }
    return a;
}