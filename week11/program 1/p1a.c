//Write a C program to read and print the content of a file.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("OUTPUT.txt","r");
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);

    }
    fclose(fp);
    return 0;

}