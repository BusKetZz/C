// ********* How to handle pointers *********

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Program to show how to hande the pointers
 *
 */

int main()
{
    int m = 29, *ab;
    
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    printf("\n");
    printf("Now ab is assigned with the address of m.\n");
    ab = &m;
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);
    printf("\n");
    m = 34;
    printf("The value of m assigned to %d now.\n", m);
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);
    printf("\n");
    *ab = 7;
    printf("The pointer variable ab is assigned with the value %d now.\n", *ab);
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    
    
    return 0;
}
