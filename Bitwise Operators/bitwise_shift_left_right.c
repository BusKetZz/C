#include <stdio.h>

/*
 * Shift operators shifts all bits towards left or right by certain
 * number of specified bits
 * 
 * Right shift (>>):
 * 
 * e.g. 00010101 shifted by two bits in the right (>>2) -> 00000101
 *      00010101 = 21 (in decimal) >> 2 bits -> 00000101 = 5 (in decimal)
 * 
 *      in general: shifting by rigth means: x = x / 2^i    x = 21 / 2^2 = 5
 *      where: x - given number (in decimal), i - number of bits shifted by
 *                                           
 *
 * Left shift (<<):
 * 
 * e.g. 0000101 shifted by two bits in the left (<<2) -> 00010100
 *      0000101 = 5 (in decimal) << 2 bits -> 00010100 = 20 (in decimal)
 * 
 *      in general: shifting by left means: x = x * 2^i     x = 5 * 2^2 = 20
 *      where: x - given number (in decimal), i - number of bits shifted by
 * 
 * 
 */

int main()
{
    int num=212; // 11010100 (in binary)

    for(int i=0; i<4; i++)
        printf("\n Right shift by %d: %d\n", i, num>>i);

    printf("\n");

    for(int i=0; i<4; i++)
        printf("\n Left shift by %d: %d\n", i, num<<i);

    return 0;
}