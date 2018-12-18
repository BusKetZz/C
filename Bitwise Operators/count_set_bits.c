#include <stdio.h>

/*
 * Program which counts the number of set bits (bits of value 1)
 * 
 * Main idea:   0000 1011
 *            & 0000 0001 << i (1 will move and check if given bit is set or not)
 */ 

int main()
{
    int x; // variable x stores a number given in decimal
    printf("\n Enter a number: ");
    scanf(" %d", &x);

    int count=0; // variable count stores the number of set bits
    for(int i=0; i<sizeof(int)*8; i++) // sizeof(int)*8 = 4*8 = 32 [bits]
        if( (x & (1 << i)) == 1 << i )
            count++;

    printf("\n Total set bits = %d\n", count);

    return 0;
}