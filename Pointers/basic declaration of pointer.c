// *********** Basic Declaration of Pointer ***********

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Program to show the basic declaration of pointer
 *
 */

int main()
{
    printf("Pointer : Show the basic declaration of pointer : \n");
    printf("------------------------------------------------------\n");
    int m = 10, n, o, *z;
    z = &m;
    printf("Here is m = %d, n and o are two integer variables and *z is an integer\n",m);
    printf("\nz stores the address of m = %p\n", z); // z is the pointer so %p would print the address
    printf("\n*z stores the value of m = %d\n", *z);
    printf("\n&m is the address of m = %p\n", &m); // &m gives the address of integer variable m
                                                   // so %p is the specifier for that address
    printf("\n&n stores the address of n = %p\n", &n);
    printf("\n&o stores the address of o = %p\n", &o);
    printf("\n&z stores the address of z = %p\n", &z);
    
    return 0;
}

