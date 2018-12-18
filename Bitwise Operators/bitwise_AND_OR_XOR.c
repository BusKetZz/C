#include <stdio.h>

void printBinary(int n); // function which shows the number in binary format

/*
 * Demonstration of bitwise AND operation
 * 
 * AND (&) is very useful in checking whether a given bit is set (1)
 * or is not set (0)
 * 
 * Denoted by: &
 * 
 */
void bitAND()
{
    printf("\n Bitwise operation AND between x and y\n\n");    
    int x = 12;     // 00000000 00000000 00000000 00001100 (in binary)
    printBinary(x), printf(" = %d (in decimal)\n", x);
    int y = 7;      // 00000000 00000000 00000000 00000111 (in binary)
    printBinary(y), printf(" = %d (in decimal)\n", y);
    int z = x & y;  // 00000000 00000000 00000000 00000100 (in binary)
    /*
     *      00001100
     *    & 00000111
     *      --------
     *      00000100    =  4 (in decimal)
     */
    printBinary(z), printf(" = %d (in decimal)\n", z);
  
} 

/*
 * Demonstration of bitwise OR operation
 * 
 * The output of bitwise OR is 1 if at least one corresponidng bit of two operands is 1
 * 
 * Denoted by: |
 * 
 */ 
void bitOR()
{
    printf("\n Bitwise operation OR between x and y\n\n");    
    int x = 12; // 00001100 (in binary)
    printBinary(x), printf(" = %d (in decimal)\n", x);
    int y = 25; // 00011001 (in binary)
    printBinary(y), printf(" = %d (in decimal)\n", y);
    int z = x | y;
    /*
     *      00001100
     *    | 00011001
     *      --------
     *      00011101    =  29 (in decimal)
     */
    printBinary(z), printf(" = %d (in decimal)\n", z);
}

/*
 * Demonstration of bitwise XOR operation
 * 
 * The output of bitwise OR is 1 if the corresponding bits of two operands are opposite
 * 
 * Denoted by: ^
 * 
 */ 
void bitXOR()
{
    printf("\n Bitwise operation XOR between x and y\n\n"); 
    int x = 12; // 00001100 (in binary)
    printBinary(x), printf(" = %d (in decimal)\n", x);
    int y = 25; // 00011001 (in binary)
    printBinary(y), printf(" = %d (in decimal)\n", y);
    int z = x ^ y;
    /*
     *      00001100
     *    ^ 00011001
     *      --------
     *      00010101    =  21 (in decimal)
     */
    printBinary(z), printf(" = %d (in decimal)\n", z);
}

/*
 * Check if a number is odd or even without using modulo operator "%"
 */ 
void odd_even()
{
    int x;
    printf("\n *** Check if a number is odd or even ***\n");
    printf("\n Enter a number: ");
    scanf(" %d", &x);
    /*
     * The least significant bit says whether a number is odd or even:
     * if a 'lsb' is assigned with 1 -> it means that a given number is odd (last bit: 2^0 = 1, so called "odd contributor")
     * if a 'lsb' is assigned with 0 -> it means that a given number is even
     */
    if( (x & 1) == 1 )
        printf(" %d is odd\n", x);
    else
        printf(" %d is even\n", x); 
}

int main()
{
    bitAND();
    bitOR();
    bitXOR();

    odd_even();
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