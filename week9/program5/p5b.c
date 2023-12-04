#include <stdio.h>

int main() {
    char a[100];

    printf("Enter any string: ");
    scanf("%s", a);

    int vowel = 0, consonant = 0, digits = 0, special = 0;
    int i = 0;

    while (a[i] != '\0') {
        if (a[i] >= '0' && a[i] <= '9') {
            digits++;
        } else if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            vowel++;
        } else if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) {
            // The character is an alphabet but not a vowel, so it's a consonant.
            consonant++;
        } else {
            // If the character is not a digit or an alphabet, consider it as a special character.
            special++;
        }
        i++;
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", consonant);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}
