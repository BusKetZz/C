// ************* Largest element of an array *************

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Display largest element of the array
 *
 */

int main()
{
    int n, i;
    float *ptr;
    
    // Size of the array given by the user
    printf("Enter size (number of elements) of an array: ");
    scanf("%d", &n);
    ptr = (float*)malloc(n*sizeof(float));
    if(ptr == NULL)
    {
        printf("Error!!! Unable to allocate memory!!!\nTerminating the program...\n");
        exit(1);
    }
    // Stores number entered by the user
    printf("\n**** Enter elements of the array ****\n");
    for(i=0; i<n; i++)
    {
        printf("%d. element: ", i+1);
        scanf("%f", ptr+i);
    }
    // Loop to store largest number
    for(i=1; i<n; i++)
    {
        if(ptr[0] < ptr[i]) // *ptr < *(ptr+i)
            ptr[0] = ptr[i]; // *ptr == *(ptr+i)
    }
    printf("Largest element: %.2f\n", *ptr); // *ptr == ptr[0]
    
    free(ptr);
    return 0;
}
    