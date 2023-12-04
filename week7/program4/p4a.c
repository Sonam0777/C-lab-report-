//Write a C Program to find the power of a given number using non recursive functions.

#include <stdio.h>

int powr(int,int);
int main()
{
    int a,b,z;
    printf("enter any exponent ");
    scanf("%d",&a);
    printf("enter a Base ");
    scanf("%d",&b);
    z=powr(a,b);
    printf("power of the given number %d",z);
    return 0;
}

int powr(int a,int b)
{
    int j;
    int result = 1;
    for(j=0;j<a;j++)
    {
        result*=b;
    }
    return result;
}