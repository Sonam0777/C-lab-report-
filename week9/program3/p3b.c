//Write a C Program to check whether given string is palindrome or not .

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];

    printf("enter any string ");
    scanf("%s", a);
    int l=strlen(a);
    int isPalindrome=1; //intially supposed a string to be palindrome
    int i;
    for(i=0;i<l;i++)
    {
        b[i]=a[l-i-1];
    }

    for(i=0;i<l;i++)
    {
        if(a[i]!=b[i])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome==1)
    {
        printf("Palindrome String\n");
    }
    else
    {
        printf("Not a Palindrome String\n");
    }
    
    return 0;
}