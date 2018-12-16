#include <stdio.h>

/*
 * The name of the array is a constant pointer that points to the address of
 * the first element of the array or the base address of the array
 */


int main()
{
    /*
    * Program which demonstrates that the elements of the array 
    * are stored in contiguous memory locations
    */
    int my_arr[5] = {1, 2, 3, 4, 5};
    printf("\n\n");
    for(int i=0; i<5; i++)
    {
        printf(" Value of my_arr[%d] = %d\t", i, my_arr[i]);
        printf(" Address of my_arr[%d] = %lu\n", i, &my_arr[i]); 
    }
    /* 
    * my_arr is a constant pointer of a base type pointer to int (int*)
    * 
    * my_arr is same as &my_arr[0]
    * my_arr + 1 is same as &my_arr[1]
    * my_arr + 2 is same as &my_arr[2]
    * and so on.. 
    * in general: (my_arr + i) is same as &my_arr[i]
    * 
    * To get the value at the given address we use indirection operator '*':
    * *(my_arr) is same as my_arr[0]
    * *(my_arr + 1) is same as my_arr[1]
    * *(my_arr + 2) is same as my_arr[2]
    * and so on..
    * in general: *(my_arr + i) is same as my_arr[i]
    * 
    */
    printf("\n\n");
    for(int i=0; i<5; i++)
    {
        printf(" Value of my_arr[%d] = %d\t", i, *(my_arr+i));
        printf(" Address of my_arr[%d] = %lu\n", i, my_arr+i); 
    }


    /*
     * Program, which demonstrates how you can access values
     * as address of elements of a 1-D array by assigning it to a pointer variable
     */
    int *p;
    p = my_arr; // it is also possible to write: p = &my_arr[0]
    printf("\n\n");
    for(int i=0; i<5; i++)
    {
        printf(" Value of my_arr[%d] = %d\t", i, *(p+i));
        printf(" Address of my_arr[%d] = %lu\n", i, p+i);
    }

    return 0;
}