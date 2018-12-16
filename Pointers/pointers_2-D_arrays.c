#include <stdio.h>

/*
 * Pointer to an array:                 int (*p)[10]; 
 * An array of 10 integer pointers:     int *p[10];
 * 
 * REMEMBER: Whenever a pointer to an array is dereferenced we get the
 *           address (or base address) of the array to which it points
 * 
 */
 
 

int main()
{
    /* 
    * Pointer that points to the 0th element of an array and a pointer
    * that points to the whole array are totally different.
    * The following program demonstrates this concept.. 
    */
    int *p; // pointer to int
    int (*parr)[5]; // pointer to an array of 5 integers (in other words: pointer to the wholle array)
    int my_arr[5]; // an array of 5 integers

    p = my_arr;
    parr = my_arr;

    printf("\n\n");
    printf(" Address of p    = %lu\n", p);
    printf(" Address of parr = %lu\n", parr);

    p++;    // pointer incremented by 1 (+4 bytes) 
    parr++;   // pointer to an array of 5 integers incremented by 1 (+4x5 bytes)

    printf("\n\n");
    printf(" *** After incrementing p and parr by 1 ***\n\n");
    printf(" Address of p    = %lu\n", p);
    printf(" Address of parr = %lu\n", parr);

    /*
     * Multi-dimensional array:     int arr[3][4]
     * 
     * REMEMBER: A 2-D array is actually a 1-D array in which each element
     *           is itself a 1-D array. So 'arr' is an array of 3 elements
     *           where each element is a 1-D array of 4 integers
     * 
     * arr points to 0th 1-D array
     * (arr + 1) points to 1st 1-D array
     * (arr + 2) points to 2nd 1-D array
     * and so on..
     * in general: (arr + i) points to ith 1-D array
     * 
     * *(arr + i) points to the base address of the ith 1-D array
     * (arr + i) and *(arr + i) points to the same address but their base types are completely different
     * base type of (arr + i) is a pointer to an array of 4 integers
     * base type of *(arr + i) is a pointer to int or *int  (in other words: it points to the base address of every ith 1-D array)
     * 
     * *(arr + i) points to the address of the 0th element of the ith 1-D array
     * *(arr + i) + 1 points to the address of the 1st element of the ith 1-D array
     * *(arr + i) + 2 points to the address of the 2nd element of the ith 1-D array
     * in general: *(arr + i) + j points to the base address of jth element of the ith 1-D array 
     * 
     * *(*(arr + i) + j) is equivalent to arr[i][j] (it gives the value in the ith row and jth column)
     * 
     */

    /*
     * Program which demonstrates how to access values and address of elements
     * of a 2-D array using pointer notation
     */ 
    int arr[3][4] = { 
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };
    int i, j;
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        printf(" Address of %d th array = %lu\n", i, *(arr + i));
        for(j=0; j<4; j++)
        {
            printf(" arr[%d][%d] = %d\n", i, j, *(*(arr + i) + j));
        }
        printf("\n\n");
    }
    
    /*
     * Program which demonstrates how to access elements of a 2-D array 
     * using a pointer to an array
     */
    int (*q)[4]; // pointer to an array of 4 integers
    q = arr; // p points to the address of 0th array (0th row, 0th column) of the whole 2-D array
    printf("\n\n");
    for(i=0; i<3; i++)
    {
        printf(" Address of %d th array = %lu\n", i, q + i);
        for(j=0; j<4; j++)
        {
            printf(" arr[%d][%d] = %d\n", i, j, *(*(q + i) + j));
        }
        printf("\n\n");
    }

    return 0;
}