
// All informations concerning pointer basics: values, addresses, sizeof
// https://overiq.com/c-programming-101/pointer-basics-in-c/

#include <stdio.h>

int main()
{
    int i=10, *ip=&i;
    double d=2.31, *dp=&d;

    printf("\n\n");
    printf(" Value of ip = address of i = %p\n", ip);   // ip stores the address of i
    printf(" Value of dp = address of d = %p\n", dp);   // dp stores the address d

    printf("\n\n");
    printf(" Value at address stored in ip = value of i = %d\n", *ip); // *ip dereferences to value at address stored in ip 
    printf(" Value at address stored in dp = value of d = %f\n", *dp); // *dp dereferences to value at address stored in dp

    printf("\n\n");
    printf(" Address of ip = %p\n", &ip); // address of pointer ip
    printf(" Address of dp = %p\n", &dp); // address of pointer dp
    
    /*
     *   Memory occupied by pointer variables
     *   is same regardless of its base type
     */

    char *ch;
    int *it;
    float *ft;
    double *db;
    printf("\n\n");
    printf(" Size of pointer variables of type: char = %lu, int = %lu, float = %lu, double = %lu (bytes)\n", sizeof(ch), sizeof(it), sizeof(ft), sizeof(db));
    printf(" Size of variables of type: char = %lu, int = %lu, float = %lu, double = %lu (bytes)\n", sizeof(*ch), sizeof(*it), sizeof(*ft), sizeof(*db));

    // Signal to operating system that program ran fine
    return 0;
}
