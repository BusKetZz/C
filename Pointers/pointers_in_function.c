#include <stdio.h>

/* 
 * 
 * This program shows basic usage of pointers in functions
 * It is very useful when you want return more than one value from the function
 * 
 */

void sum_max(int a, int b, int c, int *p, int *q)
{
    *p = a + b + c; // pointer 'p' stores the sum of three integers 

    if(a>b && a>c)
        *q=a; // pointer 'q' stores the maximum value from the three given integers
    else if(b>c)
        *q=b;
    else
        *q=c;
}

int main()
{
    int x=10, y=50, z=15, sum, max;
    sum_max(x,y,z, &sum, &max);
    printf("\n Sum = %d      Max = %d\n", sum, max);

    // Signal to operating system that program ran fine
    return 0;
}