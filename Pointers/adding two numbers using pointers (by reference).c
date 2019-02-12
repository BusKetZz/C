// ******** Adding two numbers using pointers (by reference) ********

#include <stdio.h>

/*
 *
 * Program to add two numbers using pointers (by reference)
 *
 */

float addTwoNumbers(float *n1, float *n2)
{
    float sum;
    sum = *n1 + *n2;
    return sum;
}

int main()
{
    float first_no, second_no, sum;
    
    printf("\n Pointer : Add two numbers: \n");
    printf("--------------------------------\n");
    printf(" Input first number : ");
    scanf("%f", &first_no);
    printf(" Input second number : ");
    scanf("%f", &second_no);
    sum = addTwoNumbers(&first_no, &second_no);
    printf(" The sum of %.2f and %.2f is %.2f\n\n", first_no, second_no, sum);

    return 0;
}