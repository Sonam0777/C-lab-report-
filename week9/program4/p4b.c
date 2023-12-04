//Write a C Program to check the sub string is present in the main string or not. If it present return the position otherwise return -1 .

#include <stdio.h>
#include <string.h>


int main()
{
    char a[100],b[100];

    printf("enter the string ");
    scanf("%s", a);

    printf("enter sub string ");
    scanf("%s", b);

    char *position = strstr(a, b);

    if(position !=NULL)
    {
        int pos = position-a;
        printf("Substring found at position : %d",pos);
    }
    else{
        printf("substring not found.");
    }
    return 0;
    
}