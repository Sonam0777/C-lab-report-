//Write a C program to count number of words, characters and digits in a given string.

#include <stdio.h>

int main()
{
    char a[100];
    int words = 0;
    int digits = 0;
    int character = 0;

    printf("enter any string ");
    scanf("%[^\n]", a);

    int i=0;
    while(a[i]!=0)
    {
        if(a[i]>= '0' && a[i]<= '9')
        {
            digits++;
        }

        if((a[i]>='A' && a[i]<='Z') || (a[i]>='a'&&a[i]<='z'))
        {
            character++;
        }

        if(a[i]==' ' || a[i]=='\t' || a[i]=='\n')
        {
            words++;
        }
        i++;
    }
    words++;


    printf("Number of words: %d\n",words);
    printf("number of charcters: %d\n",character);
    printf("Number of digits: %d\n",digits);
    return 0;
}