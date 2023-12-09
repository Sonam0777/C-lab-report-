//Write a C Program to capitalize every word in text file

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define FILENAME_SIZE 1024
int main()
{
    FILE *file,*temp;
    char filename[FILENAME_SIZE];
    char temp_filename[FILENAME_SIZE];
    char c;

    printf("enter filename ");
    scanf("%s", filename);

    strcpy(temp_filename,"temp____");
    strcat(temp_filename,filename);
    
    file = fopen(filename,"r");
    temp = fopen(temp_filename,"w");

    if(file==NULL || temp==NULL)
    {
        printf("error");
        exit(0);
    }
    
    bool keep_reading=true;

do{
    c=fgetc(file);
    if(feof(file)) keep_reading = false;
    else
    fputc(toupper(c),temp);
} while (keep_reading);
fclose(file);
fclose(temp);

remove(filename);
rename(temp_filename, filename);

printf("file successfullly capitalize\n");
return 0;
}