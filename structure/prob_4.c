#include<stdio.h>
typedef struct
{
    float real;
    float imaginary;

}cmplx;

int main()
{
    cmplx num1,num2,sum;
    printf("enter real part of 1st number : ");
    scanf("%f",&num1.real);
    
    printf("enter imaginary part of 1st number : ");
    scanf("%f",&num1.imaginary);
    printf("\n");

    printf("enter real part of 2nd number : ");
    scanf("%f",&num2.real);
    
    printf("enter imaginary part of 2nd number : ");
    scanf("%f",&num2.imaginary);

    sum.real=num1.real+num2.real;
    sum.imaginary=num1.imaginary+num2.imaginary;

    printf("the sum of the numbers is : %0.1f + %0.1fi",sum.real,sum.imaginary);
    return 0;

    
}