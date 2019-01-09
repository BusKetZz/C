#include <stdio.h>

int main()
{
    // '*vptr' is a void pointer; it can point to a variable of any data type
    void *vptr;

    int i = 10;
    float f = 2.34;
    char ch = 'k';

    // void pointer '*vptr' points to the address of integer variable
    vptr = &i;
    // to dereference a void pointer it must be properly typecasted, eg. (int *)vptr
    printf("\n Value of i = %d\n", *(int *)vptr);

    // void pointer 'vptr' points to the address of float variable
    vptr = &f;
    printf("\n Value of f = %.2f\n", *(float *)vptr);

    // void pointer 'vptr' points to the address of char variable
    vptr = &ch;
    printf("\n Value of ch = %c\n", *(char *)vptr);

    /*****************************************************************************************/
    /*
     *                   Pointer Arithmetic in Void Pointers
     * 
     */

    // array of 5 integer variables
    int arr_1D[5] = {12, 19, 25, 34, 46};

    // '*vp' points to the 0th element of the 1-D array
    void *vp = arr_1D;

    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf(" arr_1D[%d] = %d at address %u\n", i, *((int *)vp + i), (int *)vp + i);
    }

    // signal to operating system that program ran fine
    return 0;
}