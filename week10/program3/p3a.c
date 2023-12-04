/*Write a C Program to read time in hours, minutes, seconds using structures and perform
the following operations on time.
1. Addition of two time periods
2. Subtraction of two time periods*/

#include <stdio.h>

int main()
{
    struct operation
    {
        int hours;
        int minute;
        int seconds;
    };
    struct operation a,b,result;

    printf("enter the 1st hours, minute and second ");
    scanf("%d %d %d",&a.hours,&a.minute,&a.seconds);

    printf("enter 2nd hours, minute and second ");
    scanf("%d %d %d",&b.hours,&b.minute,&b.seconds);

    result.hours = a.hours+b.hours;
    result.minute = a.minute+b.minute;
    if(result.minute>60)
    {
        int c = result.minute/60;
        result.hours=result.hours+c;
        result.minute=result.minute%60;
    }
    result.seconds = a.seconds+b.seconds;
    if(result.seconds>60)
    {
        int d = result.seconds/60;
        result.minute=result.minute+d;
        result.seconds=result.seconds%60;
    }

    printf("addtion of two time period is %d:%d:%d\n",result.hours,result.minute,result.seconds);

    result.hours = a.hours-b.hours;
    if(a.hours<b.hours)
    {
        result.hours=0;
    }
    result.seconds = a.seconds-b.seconds;
    while(result.seconds<0)
    {
        result.minute-=1;
        result.seconds+=60;
    }
    result.minute = a.minute-b.minute;
    while(result.minute<0)
    {
        result.hours-=1;
        result.minute+=60;
    }

    printf("subtraction of two time period is %d:%d:%d\n",result.hours,result.minute,result.seconds);    
    return 0;
}