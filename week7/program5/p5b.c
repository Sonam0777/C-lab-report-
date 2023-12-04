//Write a C program to reverse a given integer number using non recursive functions.

#include <stdio.h>

int reverse(int);

int main()
{
    int n,z;
    printf("enter any numher ");
    scanf("%d",&n);
    z=reverse(n);
    printf("the reverse of %d is %d",n,z);
    return 0;
}

int reverse(int a)
{
    int rev,sum=0;
    while(a!=0)
    {
        rev=a%10;
        sum=sum*10+rev;
        a=a/10;
    }
    return sum;
}