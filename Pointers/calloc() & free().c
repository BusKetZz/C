
// ************ Example using calloc() and free() ************

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Write a C program to find sum of n elements entered by user. To perform this program, allocate
 * memory dynamically using calloc() function.
 *
 */

int main()
{
    int n, i, *ptr, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n, sizeof(int));  // memory allocated using calloc function
    if (ptr == NULL)
    {
        printf("Error! Memory not allocated!\n");
        exit(1);
    }
    printf("Enter elements of the array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d number: ", i+1);
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }
    printf("Sum = %d\n", sum);
    free(ptr);
    
    return 0;
}

