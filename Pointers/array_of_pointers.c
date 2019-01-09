#include <stdio.h>

int main()
{
    // array of 3 integer pointers that holds the address of 3 integer variables 
    int *arr_ptr[3];
    int a=10, b=20, c=30;

    // each element of the array is assigned with the address of integer variable
    arr_ptr[0] = &a;
    arr_ptr[1] = &b;
    arr_ptr[2] = &c;

    // 'for' loop which prints the addresses and coresponding values stored in array
    for(int i=0; i < 3; i++)
    {
        printf("\n Address = %u\t Value = %d\n", arr_ptr[i], *arr_ptr[i]);
    }

    // signal to operating system that program ran fine
    return 0;
}