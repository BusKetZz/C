// ******** Program to calculate Standard Deviation ********

#include <stdio.h>
#include <math.h>

/*
 *
 * Program to calculate Standard Deviation
 *
 */

float calculateSD(float data[]);

int main()
{
    int i;
    float data[10];
    
    printf("**** Enter 10 elements ****\n");
    for(i=0; i<10; i++)
    {
        printf("%d. Number: ", i+1);
        scanf("%f", data+i);
    }
    printf("\nStandard Deviation = %.6f\n", calculateSD(data));
    
    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;
    // Calculate the sum of the elements
    for(i=0; i<10; i++)
        sum += data[i];
    
    // Calculate mean of the elements (average value)
    mean = sum / 10;
    
    // Calculate standard deviation
    for(i=0; i<10; i++)
        standardDeviation += pow(data[i] - mean, 2);
    
    return sqrt(standardDeviation/10);
}
    