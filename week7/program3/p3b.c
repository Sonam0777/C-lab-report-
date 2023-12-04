//Write a C Program to find GCD of 3 given numbers using non recursive functions.

#include <stdio.h>

int gcd(int, int, int);

int main()
{
    int a=15;
    int b=30;
    int c=60;
    printf("gcd is %d",gcd(a,b,c));
}

int gcdtwo(int a, int b)
{
    while(b!=0)
    {
        int temp = b;
        b=a%b;
        a=temp;
    }
    return a;
}

int gcd(int x, int y, int z)
{
    int p = gcdtwo(x,y);
    int q = gcdtwo(p,z);
    return q;
}
