//Write a C Program to find HCF of 2 given numbers using recursive functions.

#include <stdio.h>

int hcf(int,int);

int main()
{
    int a,b,z;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    z=hcf(a,b);
    printf("hcf = %d",z);
    return 0;
}

int hcf(int x, int y)
{
    if(y==0)
    return x;
    else 
    return hcf(y,x%y);
}