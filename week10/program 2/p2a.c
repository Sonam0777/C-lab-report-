/*Write a C Program to read real and imaginary parts of a complex number using structures
and perform the following operations on complex numbers.
1. Add two complex numbers.
2. Multiply two complex numbers.
3. Subtract two complex numbers.*/

#include <stdio.h>

int main()
{
    struct operation
    {
        float real;
        float imaginary;
    };
    struct operation num1,num2,result;

    printf("enter the real and imaginary part of first complex number ");
    scanf("%f %f",&num1.real,&num1.imaginary);

    printf("enter the real and imaginary part of second complex number ");
    scanf("%f %f",&num2.real,&num2.imaginary);

    result.real = num1.real+num2.real;
    result.imaginary = num1.imaginary+num2.imaginary;
    printf("the sum of two complex number is %.2f+%.2fi\n",result.real,result.imaginary);

    result.real = num1.real-num2.real;
    result.imaginary = num1.imaginary-num2.imaginary;
    printf("the sum of two complex number is %.2f+%.2fi\n",result.real,result.imaginary);

    result.real = num1.real*num2.real;
    result.imaginary = num1.imaginary*num2.imaginary;
    printf("the sum of two complex number is %.2f+%.2fi\n",result.real,result.imaginary);

    return 0;
} 