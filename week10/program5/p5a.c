/*Write a C program to read employee details employee number, employee name, basic
salary, hra and da of n employees using structures and print employee number, employee
name and gross salary of n employees.*/

#include <stdio.h>

struct employee{
        int number;
        char name[100];
        int salary;
        int hra;
        int da;
    };
int main()
{
    struct employee n[100];

    int a,i;
    printf("enter how many employee information you want to store ");
    scanf("%d", &a);

    for(i=0;i<a;i++)
    {
        printf("\nenter information of %d employee \n",i+1);
        printf("enter employee name \n");
        scanf("%s", n[i].name);
        printf("enter employee number  \n");
        scanf("%d",&n[i].number);
        printf("enter basic salary \n");
        scanf("%d",&n[i].salary);
        printf("enter hra \n");
        scanf("%d",&n[i].hra);
        printf("enter da \n");
        scanf("%d",&n[i].da);
    }

    for(i=0;i<a;i++)
    {
        int gross=n[i].salary+n[i].hra+n[i].da;
        printf("Information of %d emplooyee \n",i+1);
        printf("Employee number\t\tEmployee name\t\tGross Salary\n");
        printf("%d\t\t\t%s\t\t\t%d\n",n[i].number,n[i].name,gross);
    }
    return 0;
}