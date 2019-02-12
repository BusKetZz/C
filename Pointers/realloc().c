// *********** Example using realloc() function ***********

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Write a program using realloc () function
 *
 */

int main()
{
    int n1, n2, i, sum1 = 0, sum2 = 0;
    int *ptr;
    
    printf("Enter size of the array: ");
    scanf("%d", &n1);
    
    ptr = (int*)malloc(n1 * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! Unable to allocate memory!\n");
        exit(1);
    }
    
    printf("*** Enter elements of the array ***\n");
    for(i=0; i<n1; i++)
    {
        printf("%d element: ", i+1);
        scanf("%d", ptr+i);
        sum1 += *(ptr+i);
    }
    printf("Sum of the array: %d\n", sum1);
    
    printf("\nEnter new size of the array: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2*sizeof(int)); // size of the array changed by the realloc() function
    if(ptr == NULL)
    {
        printf("Error! Unable to allocate memory!\n");
        exit(1);
    }
    printf("*** Enter elements of the array ***\n");
    for(i=0; i<n2; i++)
    {
        printf("%d element: ", i+1);
        scanf("%d", ptr+i);
        sum2 += *(ptr+i);
    }
    printf("Sum of the array: %d\n", sum2);
    
    return 0;
}

