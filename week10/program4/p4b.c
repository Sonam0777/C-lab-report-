//Write a C program to convert all lower case letters to upper case letters in a given string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char a[100];

    printf("Enter any string: ");
    scanf("%[^\n]", a);

    // Convert each character to uppercase
    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);
    }

    printf("The uppercase is %s", a);

    return 0;
}
