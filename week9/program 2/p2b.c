//Write a C Program to delete n characters from given string from the given position .

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[100];
    printf("enter any string ");
    scanf("%s", a);

    int index,num;
    printf("enter the index and how many string you want to delete ");
    scanf("%d %d",&index,&num);

    int l = strlen(a);
    if(index+num>l){
    printf("invalid");
    exit(0);
    }

    for(int i=index+num;i<=l;i++)
    {
        a[i-num]=a[i];
    }
    printf("after string delete %s",a);
    return 0;
}