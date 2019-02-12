// ******* Store and retrieve elements from an array *******

#include <stdio.h>

/*
 *
 * Program to store and retrieve elements from an array
 *
 */


int main()
{
    printf("\n Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------------\n");
    
    int n; //number of elements of the array
    printf(" Input the number of elements to store in the array : ");
    scanf("%d", &n);
    int arr[n], i;
    printf(" Input %d elements in the array :\n", n);
    for(i=0; i<n; i++)
    {
        printf(" element - %d : ", i);
        scanf("%d", arr+i); //arr+i == arr[i]
    }
    printf(" The elements you entered are : \n");
    for(i=0; i<n; i++)
    {
        printf(" element - %d : %d \n", i, *(arr+i));
    }
    
    return 0;
}
