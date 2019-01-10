
// 'realloc()' function is used to resize allocated memory
// without losing old data

// for more information about realloc(): https://overiq.com/c-programming-101/the-realloc-function-in-c/

#include <stdio.h>
#include <stdlib.h>

/*
 * 'realloc()' function is used to resize the previously allocated memory
 * 
 * syntax: pointer = (data type*)realloc(pointer name, number * sizeof(data type))
 *         
 *         e.g. ptr = (int*)realloc(ptr, 5 * sizeof(int));
 * 
 * IMPORTANT: after using 'realloc()', 'ptr' still points to the first byte of
 *            memory that was previously allocated using malloc() or calloc() function;
 *            BUT if there is no sufficient memory in the given block of heap area,
 *            'realloc()' allocates memory somewhere else in the heap and copies 
 *            the all content from old memory block to the new memory block, in this 
 *            case the address of 'ptr' changes.
 * 
 * IMPORTANT: after using 'realloc()' old data is not lost but newly allocated bytes
 *            are uninitialized
 */

int main()
{
    int *ptr;   // 'ptr' is pointer to int
    int n1, n2; // 'n1' and 'n2' stores the number for the size of the array

    // user specifies the initial size of the array
    printf("\n Initial size of the array: ");
    scanf(" %d", &n1);

    // 'ptr' points to the first byte of newly allocated memory
    ptr = (int *)calloc(n1, sizeof(int));

    // if there is no enough memory in heap area, calloc() function returns NULL
    if (ptr == NULL)
    {
        printf("\n Memory allocation failed\n");
        exit(1); // exit the program
    }

    printf("\n");
    // user enters elements of the array
    for (int i = 0; i < n1; i++)
    {
        printf(" Enter element at index %d: ", i);
        scanf(" %d", ptr + i);
    }

    // user decides how much increase size of the array
    printf("\n Increase the size of the array to: ");
    scanf(" %d", &n2);

    // 'ptr' points to the first byte of newly allocated memory
    // (address can be the same as the previous one)
    ptr = (int *)realloc(ptr, n2 * sizeof(int));

    // if there is no enough memory in heap area, realloc() function returns NULL
    if (ptr == NULL)
    {
        printf("\n Memory allocation failed\n");
        exit(1); // exit the program
    }

    printf("\n Enter %d more integers\n\n", n2 - n1);

    // user enters next integers in newly allocated memory
    for (int i = n1; i < n2; i++)
    {
        printf(" Enter element at index %d: ", i);
        scanf(" %d", ptr + i);
    }

    // whole content of the array is printed
    printf("\n Final array:\n");
    for (int i = 0; i < n2; i++)
    {
        printf(" %d", *(ptr + i));
    }
    printf("\n\n");

    // memory is cleaned out
    free(ptr);

    // singal to operating system that program ran fine
    return 0;
}