/*Write a C Program to read distance in inches and feet using structures and perform the
following operations
1. Add two distances
2. Subtract two distances*/

#include <stdio.h>

int main()
{
    struct operation
    {
        int inches;
        int feet;
    };
    struct operation a,b,result;

    printf("enter inches and feet of first ");
    scanf("%d %d",&a.feet,&a.inches);

    printf("enter inches and feet of second ");
    scanf("%d %d",&b.feet,&b.inches);

    result.feet=a.feet+a.feet;
    result.inches=a.inches+b.inches;
    if(result.inches>12)
    {
        int a = result.inches/12;
        result.feet = result.feet + a;
        result.inches = result.inches%12;
    }
    printf("the addition of two distance is %dfeet %dinches\n",result.feet,result.inches);

    result.feet=a.feet-a.feet;
    result.inches=a.inches-b.inches;
    if(result.inches<0)
    {
        result.feet-=1;
        //result.inches += 12;
        result.feet=12-result.inches;
    }
    printf("the addition of two distance is %dfeet %dinches",result.feet,result.inches);
    return 0;
}
