
// Program which represents the calloc() and free() functions

#include <stdio.h>
#include <stdlib.h>

/*
 * The following program uses 'calloc()' to create 
 * dynamic (it can vary in size at runtime) 1-D array
 * 
 */

int main()
{
    int *ptr; // pointer to int
    int n; // 'n' stores the size of the array

    // user enters the size of the array
    printf("\n Enter the size of the array: ");
    // size of the array is stored in 'n' variable
    scanf(" %d", &n); 

    // 'ptr' points to the first byte of the allocated memory
    // 'ptr' is typecasted as integer type
    ptr = (int *)calloc(n, sizeof(int));

    // 'if' checks whether memory was allocated correctly
    if(ptr == NULL)
    {
        printf("\n Memory allocation failed\n");
        exit(1); // exit the program
    }

    // 'for' loop used to enter elements of the array
    for(int i=0; i<n; i++)
    {
        printf(" Enter %d element: ", i+1);
        scanf(" %d", ptr + i);
    }

    printf("\n\n");
    printf(" Printing array of %d integers:\n", n);
    // 'for' loop used to print element of the array
    for(int i=0; i<n; i++)
    {
        printf(" %d", *(ptr+i));
    }
    printf("\n\n");

    // memory is cleaned out after program did its job
    free(ptr);

    // singal to operating system that program ran fine
    return 0;
}