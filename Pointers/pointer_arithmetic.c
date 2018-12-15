
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
    printf(" Value of ip (address of i) = %p\n", ip); // %p is 'pointer' type format, which shows value of the address in hexadecimal format
    printf(" Value of dp (address of d) = %p\n", dp);
    printf(" Value of cp (address of c) = %p\n", cp);

    // Functions, which do basic pointer arithmetic
    printf("\n\n");
    printf(" Value of ip + 1 = %p\n", ip+1);
    printf(" Value of dp + 1 = %p\n", dp+1);
    printf(" Value of cp + 1 = %p\n", cp+1);

    printf("\n\n");
    printf(" Value of ip + 2 = %p\n", ip+2);
    printf(" Value of dp + 2 = %p\n", dp+2);
    printf(" Value of cp + 2 = %p\n", cp+2);

    // Functions, which show pointer arithmetic between two pointers of base type "int"
    int i1=10, *i1p=&i1;
    int i2=10, *i2p=&i2;

    printf("\n\n");
    printf(" Value of i1p (address of i1) = %p\n", i1p);
    printf(" Value of i2p (address of i2) = %p\n", i2p);

    printf("\n\n");
    printf(" i2p - i1p = %ld\n", i2p-i1p); // %ld is 'long' type format 
    printf(" i1p - i2p = %ld\n", i1p-i2p);

    // Functions, which show pointer arithmetic between two pointers of base type "double"
    double d1=10, *d1p=&d1;
    double d2=10, *d2p=&d2;

    printf("\n\n");
    printf(" Value of d1p (address of d1) = %p\n", d1p);
    printf(" Value of d2p (address of d2) = %p\n", d2p);

    printf("\n\n");
    printf(" d2p - d1p = %ld\n", d2p-d1p);
    printf(" d1p - d2p = %ld\n", d1p-d2p);

    // Functions, which show pointer arithmetic between two pointers of base type "char"
    char c1='a', *c1p=&c1;
    char c2='a', *c2p=&c2;

    printf("\n\n");
    printf(" Value of c1p (address of c1) = %p\n", c1p);
    printf(" Value of c2p (address of c2) = %p\n", c2p);

    printf("\n\n");
    printf(" c2p - c1p = %ld\n", c2p-c1p);
    printf(" c1p - c2p = %ld\n", c1p-c2p);


    // Signal to operating system that program ran fine
    return 0;
}