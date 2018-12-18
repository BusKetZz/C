#include <stdio.h>

/*
 * Program which demonstrates the bitwise complement operation
 * 
 * Bitwise complement operation is a unary operation (works only on one operand)
 * It changes 1 to 0 and 0 to 1
 * 
 * Denoted by: ~
 * 
 * For any integer 'n', bitwise complement of 'n' will be: -(n+1)
 * 
 */ 
void printBinary(int n); // function which shows the number in binary format

int main()
{
    int x;
    printf("\n Enter a number: ");
    scanf(" %d", &x);
    printf("\n x before complement operation:\n");
    printBinary(x), printf(" = %d (in decimal)\n\n", x);
    x = ~x;
    printf(" x after complement operation:\n");
    printBinary(x), printf(" = %d (in decimal)\n", x);
    printf("\n");

    return 0;
}

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
}