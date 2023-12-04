/*Write a C program to compare two string without using strcmp() function.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    char b[50];
    int flag = 1;

    printf("enter the first string ");
    scanf("%s", a);

    printf("enter the second string ");
    scanf("%s", b);

    int i=0;
    while(a[i]!='\0'||b[i]!='\0')
    {
        if(a[i]!=b[i])
        {
            flag=0;
            break;
        }
        i++;
    }

    if(flag == 1)
    {
        printf("string are equal.\n");
    }
    else
    {
        printf("string are not equal\n");
    }
    return 0;
}