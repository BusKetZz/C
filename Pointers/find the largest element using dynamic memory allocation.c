// **** Find the largest element using Dynamic Memory Allocation ****

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Program to find the largest element using Dynamic Memory Allocation
 *
 */


int main()
{
    int n; //number of elements
    float *element; //pointer to array of elements
    printf("\n Pointer : Find the largest element using Dynamic Memory Allocation :\n");
    printf("-----------------------------------------------------------------------\n");
    printf(" Input total number of elements : ");
    scanf("%d", &n);
    printf("\n");
    element = (float*)calloc(n, sizeof(float)); //memory is allocated for 'n' elements
    if(element == NULL)
    {
        printf(" No memory is allocated...\n\n");
        exit(0);
    }
    int i; //iteration variable
    float max = 0; //variable for storing maximum number
    for(i=0; i<n; i++)
    {
        printf(" Number %d : ", i+1);
        scanf("%f", element+i);
        if(*(element+i) >= max)
            max = *(element+i);
    }
    printf("\n The largest element is : %.2f\n\n", max);
        
    
    return 0;
}
