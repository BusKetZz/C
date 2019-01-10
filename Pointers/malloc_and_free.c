
// *********** Example using malloc() and free() ***********

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Write a C program to find sum of n elements entered by user. To perform this program, allocate
 * memory dynamically using malloc() function.
 *
 */

int main()
{
    int n, i, *ptr, sum = 0;

    printf("\n Enter number of elements: ");
    scanf(" %d", &n);

    // memory allocated using malloc function
    // 'ptr' is a pointer to the first byte allocated memory, typecasted as 'int'
    ptr = (int *)malloc(n * sizeof(int)); 

    // when the heap runs out of free space, 'malloc()' function returns 'NULL'
    if (ptr == NULL)
    {
        printf("\n Error! Memory not allocated!\n");
        exit(1);
    }

    
    printf("\n Enter elements of the array:\n");
    for (i = 0; i < n; i++)
    {   // subsequent bytes of the allocated memory are easily accesible thanks to pointer arithmetic
        printf(" %d number: ", i + 1);
        scanf(" %d", ptr + i);
        // 'sum' is incremented by the entered number and reassigned with the new value
        // new value is a dereferenced pointer
        sum += *(ptr + i);
    }
    printf("\n Sum = %d\n\n", sum);

    // memory is cleaned out after program do its job
    free(ptr);

    // signal to operating system that program ran fine
    return 0;
}
