//Write a to perform string copy without using strcpy() function

#include <stdio.h>
int main()
{
    char str1[20]="GODLY";
    char str2[20];

    int i;

    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("source:%s\n",str1);
    printf("destination:%s\n",str2);
    return 0;
}