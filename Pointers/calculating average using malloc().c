// *** Source code to calculate average using malloc() ***

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Write a program to calculate average using dynamic memory allocation
 *
 */

int main()
{
    int n, i;
    float *ptr, sum = 0.0, average;
    
    printf("Enter size of the array [1-100]: ");
    scanf("%d", &n);
    while(n<=0 || n>100)
    {
        printf("Error!!! Size should be in the range of 1-100!\n");
        printf("Enter size again: ");
        scanf("%d", &n);
    }
    ptr = (float*)malloc(n * sizeof(float)); // memory allocated using malloc() function
    if(ptr == NULL)
    {
        printf("Error!!! Unable to allocate memory!\nTerminating the program...\n");
        exit(1);
    }
    printf("**** Enter elements of the array ****\n");
    for(i=0; i<n; i++)
    {
        printf("%d. element: ", i+1);
        scanf("%f", ptr+i);
        sum += *(ptr+i);
    }
    average = sum / n;
    printf("Average = %.2f\n", average);
    
    free(ptr);
    return 0;
}
