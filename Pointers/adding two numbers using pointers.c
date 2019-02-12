// ******** Adding two numbers using pointers ********

#include <stdio.h>

/*
 *
 * Program to add two numbers using pointers
 *
 */

int main()
{
    float first_no, second_no, *f_no, *s_no, sum;
    
    printf("\n Pointer : Add two numbers: \n");
    printf("--------------------------------\n");
    printf(" Input first number : ");
    scanf("%f", &first_no);
    printf(" Input second number : ");
    scanf("%f", &second_no);
    
    f_no = &first_no;
    s_no = &second_no;
    sum = *f_no + *s_no; //dereference to the values in the pointers and sum them
    printf("\n The sum of entered numbers : %.2f\n\n", sum);
    
    return 0;
}