//Write a C Program to print Fibonacci sequence using recursive functions.

#include <stdio.h>
int fibo(int);

int main()
{
    int n,z;
    printf("enter nth term ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    printf("%d ",fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==1 || n == 2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}