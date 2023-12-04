#include <stdio.h>

// Define the structure outside the main function
struct employee {
    int number;
    char name[100];
    int salary;
    int hra;
    int da;
};

int main() {
    struct employee n[100];

    int a, i;
    printf("Enter how many employee information you want to store: ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        printf("Enter information of %d employee\n", i + 1);
        printf("Enter employee name: ");
        scanf("%s", n[i].name);
        printf("Enter employee number: ");
        scanf("%d", &n[i].number);
        printf("Enter basic salary: ");
        scanf("%d", &n[i].salary);
        printf("Enter HRA: ");
        scanf("%d", &n[i].hra);
        printf("Enter DA: ");
        scanf("%d", &n[i].da);
    }

    printf("Employee Information:\n");
    printf("Employee number\tEmployee name\tBasic Salary\tHRA\tDA\n");

    for (i = 0; i < a; i++) {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\n", n[i].number, n[i].name, n[i].salary, n[i].hra, n[i].da);
    }

    return 0;
}
