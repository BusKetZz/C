// **** Passing 1-D array to function (pointers) ****

/*
    Example of passing 1-D array to function
*/

#include <stdio.h>

void printArray(int *p_array, int n)
{
    int i;
    printf("Content of the array: ");
    for(i=0; i<n; i++)
        printf("%4d", *(p_array+i));
    printf("\n");
}

int main()
{
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {1, 2, 3, 4, 5};
    
    printArray(x, 5);
    printArray(y, 5);
    
    return 0;
}