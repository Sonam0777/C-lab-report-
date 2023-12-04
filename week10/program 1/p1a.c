//Write a C program to store name, roll number, year and marks of three subjects of n students and print the student the name, roll number, average and grade based on average marks of the student using structures. 

#include <stdio.h>

int main()
{
    struct student
    {
        char name[20];
        int roll_no;
        int marks[3];
        float average;
        char grade;
    };

    int N;
    printf("enter the number of students ");
    scanf("%d",&N);
    struct student s[N];
    int i,j,total;
    for(i=0;i<N;i++)
    {
        printf("enter data for students %d:\n",i+1);
        printf("Enter name : ");
        scanf("%s",s[i].name);
        printf("enter roll number: ");
        scanf("%d",&s[i].roll_no);
        printf("enter marks in three subject:\n");
        total = 0;
        for(j=0;j<3;j++){
        scanf("%d",&s[i].marks[j]);
        total+=s[i].marks[j];
        }
        s[i].average=(float)total/3;
    }
    for(i=0;i<N;i++)
    {
        if(s[i].average>=90)
        {
            s[i].grade='A';
        }
        else if(s[i].average>=80)
        {
            s[i].grade='B';
        }
        else if(s[i].average>=70)
        {
            s[i].grade='C';
        }
        else if(s[i].average>=60)
        {
            s[i].grade='D';
        }
        else{
            s[i].grade='F';
        }
        printf("\nStudent %d Information:\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("\nRoll Number: %d\n",s[i].roll_no);
        printf("\nAverage Marks:%.2f\n",s[i].average);
        printf("Grade: %c\n",s[i].grade);
    }
    return 0;
}