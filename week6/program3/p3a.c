//Write a C Program to find the Sum of Series sum=1 + x^1+x^2 +x^3 +x^4 +……….+x^n

#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,x;
    int sum =1,j;
    printf("enter nth term ");
    scanf("%d",&n);

    printf("enter the value of x ");
    scanf("%d",&x);

    //main logic

    for(i=1;i<n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("sum = %d",sum);
    return 0;
}

/*x=1 n =3
    1+1+1
    3
*/
