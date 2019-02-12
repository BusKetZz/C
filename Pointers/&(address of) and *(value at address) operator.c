// *** How to use &(address of) and *(value at address) operator ***

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Program to demonstrate the use of &(address of) and *(value at address) operator
 *
 */

int main()
{
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("------------------------------------------------------\n");
    int m = 300;
    double fx = 300.600006;
    char cht = 'z';
    int *pt1;
    double *pt2;
    char *pt3;
    pt1 = &m;
    pt2 = &fx;
    pt3 = &cht;
    printf("m = %d\n", m);
    printf("fx = %lf\n", fx);
    printf("cht = %c\n", cht);
    printf("\n"); //new line
    printf("Using & operator :\n");
    printf("------------------------------------------------------\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);
    printf("\n"); //new line
    printf("Using & and * operator :\n");
    printf("------------------------------------------------------\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value at address of fx = %lf\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));
    printf("\n"); //new line
    printf("Using only pointer variable :\n");
    printf("------------------------------------------------------\n");
    printf("address of m = %p\n", pt1);
    printf("address of fx = %p\n", pt2);
    printf("address of cht = %p\n", pt3);
    printf("\n"); //new line
    printf("Using only pointer operator :\n");
    printf("------------------------------------------------------\n");
    printf("value at address of m = %d\n", *pt1);
    printf("value at address of fx = %lf\n", *pt2);
    printf("value at address of cht = %c\n", *pt3);
    
    return 0;
}