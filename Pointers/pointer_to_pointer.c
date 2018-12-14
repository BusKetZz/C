
// Basic informations concerning pointer to pointer (at the very bottom of the site)
// https://overiq.com/c-programming-101/pointer-arithmetic-in-c/

#include <stdio.h>

int main()
{
    int i = 10;      // integer variable
    int *ip = &i;    // pointer of base type "int"
    int **ipp = &ip; // pointer to pointer of base type "int"

    printf("\n\n");
    printf(" Value of i = %d\n", i);

    printf("\n\n");
    printf(" Address of i = %u\n", &i);
    printf(" Value of ip = %u\n", ip);

    printf("\n\n");
    printf(" Address of ip = %u\n", &ip);
    printf(" Value of ipp = %u\n", ipp);

    printf("\n\n");
    printf(" Value of *ipp = value of ip = address of i = %u\n", *ipp);
    printf(" Value of **ipp = value of i = %d\n", **ipp);

    // Signal to operating system that program ran fine
    return 0;
}