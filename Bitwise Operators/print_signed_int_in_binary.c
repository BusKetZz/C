#include <stdio.h>

/*
 * Program which prints the binary equivalent of a signed integer
 */
void printBinary(int n)
{
    unsigned k = 1 << 31; // in binary: 10000000 00000000 00000000 00000000
                          // k is 'unsigned' to avoid 1's when shifting to the right
    printf(" ");
    for(int i=0; i<sizeof(int)*8; i++)
    {
        if( (n & (k>>i)) == (k>>i) )
            printf("1");
        else
            printf("0");
        
        if((i+1)%8 == 0)
            printf(" ");
    }
    printf("\n");

} 

int main()
{   
    int n; // 'n' stores the number given in decimal
    printf("\n Enter a number: ");
    scanf(" %d", &n);
    
    printBit(n);

    return 0;
}