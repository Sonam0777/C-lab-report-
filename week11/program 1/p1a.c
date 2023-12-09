//Write a C program to read and print the content of a file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("abc.txt","r");

    if(fp==NULL)
    {
        printf("error");
        exit(0);
    }

    while(!feof(fp))
    {
        fgets(str,45,fp);
        printf("%s",str);
    }

    fclose(fp);
    return 0;

}