/*
1.Basic Arithmetic Operations

Problem :   Write a program that takes two numbers as input and performs the following arithmetic operations on them: 
            addition, subtraction, multiplication, division, and modulus.
            Display the results for each operation.
*/

#include<stdio.h>

int main()
{
    int a, b, add, sub, mul, divi, mod;
    
    printf("PROGRAM FOR PERFORMING ARITHMATIC OPETATORS\n\n");
    
    printf("Enter the first number a : ");
    scanf("%d", &a);
    printf("Enter the second number b : ");
    scanf("%d", &b);
    
    add = a + b;
    printf("\nADDITION of numbers %d & %d is : %d", a, b, add);
    
    sub = a - b;
    printf("\nSUBTRACTION of numbers %d & %d is : %d", a, b, sub);
    
    mul = a * b;
    printf("\nMULTIPLICATION of numbers %d & %d is : %d", a, b, mul);
    
    divi = a / b;
    printf("\nDIVISION of numbers %d & %d is : %d", a, b, divi);
    
    mod = a % b;
    printf("\nMODULUS of numbers %d & %d is : %d", a, b, mod);
    
    return 0;
}
