//Write a C Program to find LCM of 3 given numbers using recursive functions.

#include <stdio.h>

int lcm(int , int, int);
int gcd(int, int);
int main()
{
    int a,b,c,z;
    printf("enter three number ");
    scanf("%d %d %d",&a,&b,&c);
    z=lcm(a,b,c);
    printf("the lcm is = %d",z);
    return 0;
}
int gcd(int x, int y)
{
    if(y == 0)
    {
        return x;
    }
    return gcd(y,x%y);
}
int lcmtwo(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int lcm(int a, int b, int c)
{
    int p = lcmtwo(a,b);
    int q = lcmtwo(p,c);
    return q;
}