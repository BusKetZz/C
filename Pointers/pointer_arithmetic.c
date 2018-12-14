
// Basic informations concerning pointer arithmetic 
// https://overiq.com/c-programming-101/pointer-arithmetic-in-c/

#include <stdio.h>

int main()
{
    int i=10, *ip=&i;
    double d=2.3, *dp=&d;
    char c='a', *cp=&c;

    // Functions, which print the values stored in pointer variables
    printf("\n\n");
    printf(" Value of ip (address of i) = %u\n", ip);
    printf(" Value of dp (address of d) = %u\n", dp);
    printf(" Value of cp (address of c) = %u\n", cp);

    // Functions, which do basic pointer arithmetic
    printf("\n\n");
    printf(" Value of ip + 1 = %u\n", ip+1);
    printf(" Value of dp + 1 = %u\n", dp+1);
    printf(" Value of cp + 1 = %u\n", cp+1);

    printf("\n\n");
    printf(" Value of ip + 2 = %u\n", ip+2);
    printf(" Value of dp + 2 = %u\n", dp+2);
    printf(" Value of cp + 2 = %u\n", cp+2);

    // Functions, which show pointer arithmetic between two pointers of base type "int"
    int i1=10, *i1p=&i1;
    int i2=10, *i2p=&i2;

    printf("\n\n");
    printf(" Value of i1p (address of i1) = %u\n", i1p);
    printf(" Value of i2p (address of i2) = %u\n", i2p);

    printf("\n\n");
    printf(" i2p - i1p = %d\n", i2p-i1p);
    printf(" i1p - i2p = %d\n", i1p-i2p);

    // Functions, which show pointer arithmetic between two pointers of base type "double"
    double d1=10, *d1p=&d1;
    double d2=10, *d2p=&d2;

    printf("\n\n");
    printf(" Value of d1p (address of d1) = %u\n", d1p);
    printf(" Value of d2p (address of d2) = %u\n", d2p);

    printf("\n\n");
    printf(" d2p - d1p = %d\n", d2p-d1p);
    printf(" d1p - d2p = %d\n", d1p-d2p);

    // Signal to operating system that program ran fine
    return 0;
}