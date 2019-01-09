#include <stdio.h>

// declaration to the function which returns a pointer of type 'int'
int *return_pointer (int *, int); 

int main()
{
    int i, *ptr;
    // 'arr' is a constant pointer to the 0th element of the 1-D array
    int arr[] = {11, 22, 33, 44, 55};
    i = 4;

    // address of the 0th element of 'arr' is printed
    printf("\n Address of arr = %u\n", arr); // %p instead of %u would print address in hexadecimal format

    // pointer 'ptr' is assigned with the returned value from the function
    ptr = return_pointer(arr, i); // function will return an address

    printf("\n After incrementing arr by 4\n\n");

    // 'ptr' includes an address returned from the function
    printf(" Address of ptr = %u\n", ptr);
    // 'ptr' and '*ptr' include address and value at these address, respectively
    printf(" Value at address %u is %d\n\n", ptr, *ptr);

    // signal to operating system that program ran fine 
    return 0;
}

// function which returns a pointer of type 'int'
// 'arr' is passed uing call by reference
// 'n' is passed using call by value 
int *return_pointer (int *p, int n)
{
    // address 'p' is incremented by 4, which means: address + n*4 
    p = p + n;
    // address stored at 'p' is returned from the function
    return p;
}