// *********** Two arrays assignment (2) ***********

#include <stdio.h>  // for standard I/O operations
#include <math.h>

int main()
{
    int x[10] = {0}; //arrray with 10 elements, initialized each with 0
    int n; //variable for storing the amount of input numbers
    int i;
    int digit;
    
    printf("Enter total number of digits you want to input (max 10): ");
    scanf("%d", &n);
    
    if(n>10)
    {
        printf("Invalid choice!\n");
        return 0;
    }
    else
        for(i=10-n; i<10; ++i)
        {
            printf("Enter the digit (first, second, and so on...): ");
            scanf("%d", &digit);
            x[i] = digit;
        }
    printf("Your number: ");
    for(i=0; i<10; ++i)
        printf("%d", x[i]);
    printf("\n\n");
    
    int d;
    printf("Input the digit to add (1-9): ");
    scanf("%d", &d);
    
    if(d<1 || d>9)
    {
        printf("Invalid input!\n");
        return 0;
    }
    else
        x[9] = x[9] + d;
    for(i=9; i>=0; --i)
        {
            if(x[i]>9)
            {
                x[i] = x[i] - 10;
                x[i-1] = x[i-1] + 1;
            }
            else
                break;
        }

    printf("Your number (after addition): ");
    
    for(i=0; i<10; ++i)
        printf("%d", x[i]);
    printf("\n\n");
    
    
    return 0;
}
