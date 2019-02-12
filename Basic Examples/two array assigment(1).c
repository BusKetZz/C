// *********** Two arrays assignment (1) ***********

#include <stdio.h>  // for standard I/O operations
#include <math.h>

int main()
{
    float a1[20], a2[20]; //arrays with 20 float elements
    int i;
    int count = 1; //counting amount of inputed numbers
    float sum1 = 0, sum2 = 0;
    
    printf("Enter maximum 20 numbers, terminate with 0.0\n");
    printf("First number: ");
    scanf("%f", &a1[0]);
    sum1 += a1[0];
    
    for(i=1; i<20; ++i)
    {
        printf("Next: ");
        scanf("%f", &a1[i]);
        ++count;
        sum1 += a1[i];
        
        if(a1[i] == 0.0 || count > 20)
        {
            count--;
            break;
        }
    }
        
    printf("\n\n");
    printf("There are in total %d numbers given as input.\n\n", count);
    
    for(i=0; i<20; ++i)
    {
        if(i % 2 == 0)
            a2[i] = a1[i] * 2;
        else
            a2[i] = cbrt(a1[i]);
        
        sum2 += a2[i];
    }
    printf(" Input Array    2nd Array\n\n");
    for(i=0; i<20; ++i)
    {
        if(a1[i] != 0 && a2[i] != 0)
        printf("% 12.5f % 12.5f\n", a1[i], a2[i]);
        else
            break;
    }
    printf("\n\n");
    printf("Sum of the first array:     %4.5f\n", sum1);
    printf("Sum of the second array:    %4.5f\n", sum2);
    
    
    return 0;
}