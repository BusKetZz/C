// **************** Armstrong Number ****************

#include <stdio.h>
#include <math.h>

/*
   Develop a function to test Armstrong Number. A number is Armstrong Number if
   the sum of each digit raised to the power of number of digits (in that number) equals
   to the tumber itself.
   1634 is Armstrong Number as 1^4 + 6^4 + 3^4 + 4^4 = 1634
   371 is Armstrong as 3^3 + 7^3 + 1^3 = 371
*/

// prototype of the functions

int getTotalDigits(int);
int isArmstrong(int);

int getTotalDigits(int n)
{
    int count = 0;
    
    while(n>0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int isArmstrong(int n)
{
    int sum = 0;
    int count = getTotalDigits(n);
    int temp = n;
    
    while(n>0)
    {
        sum = sum + pow(n % 10, count);
        n = n/10;
    }
    return temp == sum;
}

int main()
{
    int i;
    for(i=1; i<=50000; i++)
    {
        if(isArmstrong(i))
            printf("%d is Armstrong Number\n", i);
    }
    return 0;
}
