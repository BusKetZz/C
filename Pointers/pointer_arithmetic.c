
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
    printf(" Value of ip (address of i) = %lu\n", ip); // %lu is 'pointer' type format, which shows value of the address in hexadecimal format
    printf(" Value of dp (address of d) = %lu\n", dp);
    printf(" Value of cp (address of c) = %lu\n", cp);

    // Functions, which do basic pointer arithmetic
    printf("\n\n");
    printf(" Value of ip + 1 = %lu\n", ip+1);
    printf(" Value of dp + 1 = %lu\n", dp+1);
    printf(" Value of cp + 1 = %lu\n", cp+1);

    printf("\n\n");
    printf(" Value of ip + 2 = %lu\n", ip+2);
    printf(" Value of dp + 2 = %lu\n", dp+2);
    printf(" Value of cp + 2 = %lu\n", cp+2);

    /*
     *  Pointer arithmetic: (address1 - address2) / sizeof(type) = distance between addresses  
     *  e.g. pointers of base type int: (3200 - 3000) / 4 = 50
     */

    printf("\n\n");
    int *p = (int*)3200; // pointer "p" with initialized address: 3200
    int *q = (int*)3000; // pointer "q" with initialized address: 3000
    printf(" pointer 'p' - pointer 'q' = distance between addresses\n");
    printf(" %d - %d = %d\n", p, q, p-q);

    // Functions, which show pointer arithmetic between two pointers of base type "int"
    int i1=10, *i1p=&i1;
    int i2=10, *i2p=&i2;

    printf("\n\n");
    printf(" Value of i1p (address of i1) = %lu\n", i1p);
    printf(" Value of i2p (address of i2) = %lu\n", i2p);

    printf("\n");
    printf(" i1p - i2p = %ld\n", i1p-i2p); // %ld is 'long' type format 

    // Functions, which show pointer arithmetic between two pointers of base type "double"
    double d1=10, *d1p=&d1;
    double d2=10, *d2p=&d2;

    printf("\n\n");
    printf(" Value of d1p (address of d1) = %lu\n", d1p);
    printf(" Value of d2p (address of d2) = %lu\n", d2p);

    printf("\n");
    printf(" d1p - d2p = %ld\n", d1p-d2p);

    // Functions, which show pointer arithmetic between two pointers of base type "char"
    char c1='a', *c1p=&c1;
    char c2='a', *c2p=&c2;

    printf("\n\n");
    printf(" Value of c1p (address of c1) = %lu\n", c1p);
    printf(" Value of c2p (address of c2) = %lu\n", c2p);

    printf("\n");
    printf(" c1p - c2p = %ld\n", c1p-c2p);

    /*
     * More on implicit casting
     */

    int x=300; // in binary: 00000000 00000000 00000001 00101100
    char *k;
    int *l;
    
    k = (char*)&x; // pointer 'k' casted as a base type 'char' -> points only to 1 byte (00101100)
    l = &x; // pointer 'l' of base type 'int' -> points to all 4 bytes (00000000 00000000 00000001 00101100)
    printf("\n\n");
    printf(" *k(x) = %d     *l(x) = %d\n", *k, *l);
    k = k + 1; // address casted as byse type 'char' incremented by 1 -> points to the next byte (00000001)
    printf(" *k(x) = %d      *l(x) = %d\n", *k, *l);

    // Signal to operating system that program ran fine
    return 0;
}