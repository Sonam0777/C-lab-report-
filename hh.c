#include <stdio.h>

int main() {
    int n;
    
    printf("Enter how many elements you want to print: ");
    scanf("%d", &n);
    
    int a[50], b[50]; // Define arrays to store elements and their frequencies
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("The elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        int c = 1; // Initialize count to 1 for the current element

        if (a[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    c++;
                    a[j] = -1; // Mark the repeated element as -1 to avoid counting it again
                }
            }
        }
        b[i] = c; // Store the frequency in the 'b' array
    }

    printf("Repeated elements with frequency count:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            printf("The number %d is repeated %d times\n", a[i], b[i]);
        }
    }

    return 0;
}
