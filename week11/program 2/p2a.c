#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048
int main()
{   
    FILE *file;
    char filename[FILENAME_SIZE];
    char buffer[MAX_LINE];
    int count=0;

    printf("enter filename ");
    scanf("%s", filename);

    file=fopen(filename,"r");

    if(file==NULL)
    {
        printf("error");
        exit(0);
    }

    bool keepreading = true;

    do
    {
        fgets(buffer,MAX_LINE,file);
        count++;
        if(feof(file)) keepreading=false;
    } while (keepreading);

    printf("number of line in a %s is %d",filename,count);
    fclose(file);
    return 0;  
}