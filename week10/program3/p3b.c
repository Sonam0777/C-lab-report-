//Write a C program to count the frequency of occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int count=0;
    char target;

    printf("enter the string ");
    scanf("%[^\n]", a);

    printf("enter the key frequency ");
    scanf(" %c",&target);

    int i = 0;
    while(a[i]!='\0')
    {
        if(a[i]==target)
        {
        count++;
        }
    i++;
    }
    
    printf("the frequency of '%c'in the string is %d",target,count);
    return 0;
}
