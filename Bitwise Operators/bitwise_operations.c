#include <stdio.h>

// structure made for the initialization of the bit field
struct field
{
    unsigned int bit_field : 32; // bit field of 'unsigned int' type
} bits1, bits2;                  // size of 32 bits (4 bytes)

/*
 * 
 * 
 * Function which prints the binary equivalent of a signed integer
 * 
 * 
 */

void printBinary(int n)
{
    unsigned k = 1 << 31; // in binary: 10000000 00000000 00000000 00000000
                          // k is 'unsigned' to avoid 1's when shifting to the right
    printf(" ");

    // 'for loop' prints the value in the binary format
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if ((n & (k >> i)) == (k >> i))
            printf("1");
        else
            printf("0");

        if ((i + 1) % 8 == 0)
            printf(" ");
    }
    printf(" (binary)");
    printf("\n");
}

/*
 * Function which returns the specified bit from the given value (in decimal format)
 * 
 * e.g. if given value = 11 (in decimal) = 00001011 (in binary) 
 *      and user want the 0th bit to be returned, then the function
 *      returns 1, or if user want 2nd bit, then the function 
 *      returns 0
 * 
 * BITS ARE INDEXED FROM 0 (LSB)!
 */

int chooseBit(int value, int which)
{
    int bit;
    // 'if' checks whether bit is 0 or 1 by doing left shift operation
    if ((value & (1 << which)) == (1 << which))
        bit = 1;
    else
        bit = 0;

    // 'bit' returns the chosen bit
    return bit;
}

/*
 * 
 * Function which counts the 0's or 1's in the value given in decimal format
 * 
 *  
 */

int countBit(int value, int bit_value)
{
    int count = 0;                            // variable 'count' stores the number of 0's or 1's
                                              // initialized with zero for proper count procedure
    for (int i = 0; i < sizeof(int) * 8; i++) // for loop interates 32 times (number of bits in the integer format)
    {                                         // sizeof(int)*8 = 4*8 = 32 [bits]
        if ((value & (1 << i)) == (bit_value << i))
            count++; // if checks using AND operator wheter given bit is 0 or 1
    }                // bit_value can be set as 0 or 1, in binary 0 is 0 but 1 is 00000001
    return count;    // in the case of 1, bit 1 is moving left, if 1 & 1 = 1 then variable 'count' is increased
}

/*
 * Function which counts the longest substring in binary for the given number
 * 
 * e.g. -1 (in decimal) = 11111111 11111111 11111111 11111111 (in binary)
 *      so the longest substring of 1's is equal 32
 * 
 *      1 (in decimal) = 00000000 00000000 00000000 00000001 (in binary)
 *      so the longest substring of 0's is equal to 31
 * 
 */

int longestSubstring(int value, int bit_value)
{
    int i, count, count_check; // i - for iteration in the loop; count - counts the repitition of 0 or 1;
                               // count_check - saves the longest substring of 0's or 1's

    if (bit_value == 0) // if the user want to count the longest substring of 0's
    {
        // for loop which counts the longest substring
        for (i = 0, count = 0, count_check = 0; i < sizeof(int) * 8; i++)
        {
            if ((value & (1 << i)) == (0 << i)) // it checks given number bit by bit using leftward shift
                count++;
            else
            {
                if (count >= count_check) // if new 'count' is greater than the previous one
                    count_check = count;  // count_check saves this new value and set it as a new reference point

                count = 0; // 'count' is clear and ready for the next counting of substring
            }
        }
        if (count >= count_check) // this block is used after the last bit is checked and counted
            count_check = count;  // if new 'count' is greater than the previous, it is saved in 'count_check'
    }
    else if (bit_value == 1) // whole procedure is the same as above
    {
        for (i = 0, count = 0, count_check = 0; i < sizeof(int) * 8; i++)
        {
            if ((value & (1 << i)) == (1 << i))
                count++;
            else
            {
                if (count >= count_check)
                    count_check = count;

                count = 0;
            }
        }
        if (count >= count_check)
            count_check = count;
    }
    return count_check; // function is of type 'int', so it returns the value stored in 'count_check'
}

/*
 * 
 * Function which set selected bit 0 or 1 in the value given by the user
 * 
 * e.g. value = 11 (in decimal) = 00001011 (in binary)
 *      user selects bit nr.0 to be changed from 1 to 0,
 *      then a new value is 00001010 (in binary) = 10 (in decimal),
 *      this new value is printed into console
 * 
 */

int setBit(int value, int which, int bit_value)
{
    // bit position in the value given by the user is checked
    // if bit at specified position is already set to a value specified by the user
    // function print the information and return the same value
    if ((value & (1 << which)) == (bit_value << which))
        printf("\n Given bit is set to selected bit value...\n");
    // if above is not true, the given bit is changed to selected value
    // and new value is return to the main block of the program
    else
        value ^= (1 << which); // XOR operation performed at given position
                               // it changes 0 to 1 or 1 to 0
                               // e.g. 1 ^ 1 = 0, 1 ^ 0 = 0
    return value;
}

/*
 * 
 * Function which allows to choose the range of bits to be printed into console
 * 
 * User selects the most left bit, and the most right bit
 * 
 * This is the information for the function what range of bits should be printed     
 *      
 * 
 */

void chooseBitsRange(int value, int left, int right)
{
    bits1.bit_field = value;  // 'bits' is the bit field of size 32 bits
    unsigned int k = 1 << 31; // in binary: 10000000 00000000 00000000 00000000
                              // 'k' is unsigned to avoid 1's when shifting to the right
    // Section below does the procedure needed to print a number in binary format
    printf("\n Range of bits chosen by the user:\n");
    printf(" ");
    // 'for' loop iterates in the range from the left bit up to right bit
    for (int i = left; i >= right; i--)
    { // 'AND' operation checks whether the bit in a given place is 0 or 1
        if ((bits1.bit_field & (k >> (31 - i))) == (k >> (31 - i)))
            printf("1"); // if bit in given place is set to 1, the function prints 1
        else
            printf("0"); // if bit in given place is set to 0, the function prints 0

        if (i % 8 == 0) // bits are segmented into blocks o 8 bits (1 byte)
            printf(" ");
    }
    printf("\n");
}

/*
 * 
 * Function which allows to choose the range of bits to be printed into console
 * 
 * User selects the most left bit, and the most right bit
 * 
 * This is the information for the function what range of bits should be printed     
 *      
 * 
 */

int changeAdjacentBits(int value)
{
    bits1.bit_field = value; // first bit field is assigned with the value entered by the user

    // number stored in bit field nr.1 is printed into console
    printf("\n %d (decimal)\n", bits1.bit_field);

    // function 'printBinary' is called to print the number in binary format
    printBinary(bits1.bit_field);

    // get all even bits of entered value
    unsigned int even_bits = bits1.bit_field & 0xAAAAAAAA;

    // get all odd bits of entered value
    unsigned int odd_bits = bits1.bit_field & 0x55555555;

    // right shift even bits
    even_bits >>= 1;

    // left shift odd bits
    odd_bits <<= 1;

    // combine even and odd bits
    return (even_bits | odd_bits);
}

/*
 * 
 * Function, which checks every pair of bits of two numbers entered by the user
 * 
 * and returns the number of bits which are the same at a given position
 * 
 * eg. val1 = 1011 (binary) and val2 = 1001 (binary)
 *     
 *     function returns: 3
 */

int howManyIdenticalBits(int val1, int val2)
{
    // bit fields: 'bits1' and 'bits2' are assigned with the values inputted by the user
    bits1.bit_field = val1;
    bits2.bit_field = val2;

    int count = 0; // 'count' is set to 0 for proper counting procedure
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        // 'if else' block checks whether two values have the same bits at the same position
        if (((bits1.bit_field & (1 << i)) == 1 << i) && ((bits2.bit_field & (1 << i)) == 1 << i))
            count++;
        else if (((bits1.bit_field & (1 << i)) == 0 << i) && ((bits2.bit_field & (1 << i)) == 0 << i))
            count++;
    }
    // function returns the value stored in 'count'
    return count;
}

int main()
{
    int value;      // 'value' stotes the number given by the user in decimal format
    int bit_value;  // 'bit_value' stores which bit (0 or 1) should be counted
    int which;      // which is initialize with one in case of avoiding infinite while loop
    int operation;  // 'operation' stores the number of operation which should be done
    int left;       // 'left' stores the number of the left most bit (start of the given range)
    int right;      // 'right' stores the number of the right most bit (end of the given range)
    int val1, val2; // 'val1' and 'val2' are values entered by the user to check identical bits

    do
    {
        printf("\n ******************************************\n");
        printf(" *************** USER MENU ****************\n");
        printf("\n ******************************************\n");
        printf(" ****** LIST OF AVAILABLE OPERATIONS ******\n");
        printf(" 1. Choose bit.\n");
        printf(" 2. Count bit. \n");
        printf(" 3. Count longest substring.\n");
        printf(" 4. Set chosen bit.\n");
        printf(" 5. Choose bit range.\n");
        printf(" 6. Swap adjacent bits.\n");
        printf(" 7. Count identical bits at the same position.\n");
        printf(" 8. End.\n");

        printf("\n Enter number of operation: ");
        scanf(" %d", &operation);

        // function goes to the operation nr.1 which prints the bit specified by the user
        if (operation == 1)
        {
            printf("\n Enter a number: "); // user enters the number in decimal format
            scanf(" %d", &value);

            do
            {
                printf("\n Which bit do you want to print (0->31): "); // user specifies the bit number, which should be printed
                scanf(" %d", &which);
            } while (which < 0 || which > sizeof(int) * 8); // do_while controls the proper input of the bit number
                                                            // bit number must be between 0 and 32 for integer type
            int bit = chooseBit(value, which);              // control goes to the chooseBit function
            printf("\n Bit nr. %d from value %d (decimal): %d (binary)\n", which, value, bit);
        }

        // function goes to the operation nr.2 which counts the 0's or 1's in binary format of a given value
        else if (operation == 2)
        {
            printf("\n Enter a number: "); // user enters a number in decimal format
            scanf(" %d", &value);

            do
            {
                printf("\n Count 0's or 1's? (0/1): "); // user specifies wheter 0's or 1's should be calculated
                scanf(" %d", &bit_value);
            } while (bit_value < 0 || bit_value > 1); // do_while controls proper input of 'bit_value'
                                                      // it can be only 0 or 1
            int count = countBit(value, bit_value);   // control goes into countBit function
                                                      // returned value is stored into 'count' variable
            printf("\n Number of %d's in the value = %d (decimal) is: %d\n", bit_value, value, count);
        }

        // function goes to the operation nr.3 which counts the longest substring of 0'1 or 1's
        else if (operation == 3)
        {
            printf("\n Enter a number: "); // user enters the number in decimal format
            scanf(" %d", &value);

            do
            {
                // user enters whether 0's or 1's should be checked
                printf("\n Enter which substring do you want to count: 0's or 1's? (0/1):  ");
                scanf(" %d", &bit_value);
            } while (bit_value < 0 || bit_value > 1); // do_while controls the proper input of 'bit_value'

            int substring; // variable 'substring' stores the returned value from the function
            substring = longestSubstring(value, bit_value);

            printf("\n The longest substring of %d's in the given number = %d\n", bit_value, substring);
        }

        // function goes to the operation nr.4 which allows to set a chosen bit and print the new value
        else if (operation == 4)
        {
            printf("\n Enter a number: "); // user enters a number in decimal format
            scanf(" %d", &value);

            do
            { // user selects the position of a bit to be changed
                printf("\n Which bit do you want to change? (0->31): ");
                scanf(" %d", &which);
            } while (which < 0 || which > 31); // do_while controls the range of bits to be selected

            do
            { // user chooses the which bit should be placed into selected place
                printf("\n What number do you want to set in this place? (0/1): ");
                scanf(" %d", &bit_value);
            } while (bit_value < 0 || bit_value > 1); // do_while controls proper bit value selection

            int new_value; // 'new_value' stores a new value with a changed bit
                           // if bit is not changed, 'new_value' is the same as the previous one
            new_value = setBit(value, which, bit_value);

            printf("\n Value before change: %d\t Value after change: %d\n", value, new_value);
        }

        // function goes to the operation nr.5 which prints bits in the selected range
        else if (operation == 5)
        {
            printf("\n Enter a number: "); // user enters a number in decimal format
            scanf(" %d", &value);

            do
            { // user selects the position of the left 'starting' bit
                printf("\n Which left bit do you want to choose? (31->1): ");
                scanf(" %d", &left);
            } while (left < 1 || left > 31); // do_while controls the range of bits to be selected

            do
            { // user selects the position of the right 'closing' bit
                printf("\n Which right bit do you want to choose? (right bit < left bit): ");
                scanf(" %d", &right);
            } while (right < 0 || right > left); // do_while controls the range of bits to be selected

            chooseBitsRange(value, left, right);
        }

        // function goes to the operation nr.6, which changes adjacent pair of bits
        else if (operation == 6)
        {
            printf("\n Enter a number: "); // user enters a number in decimal format
            scanf(" %d", &value);

            // 'bits2' (bit field) is assigned with the returned value from the function
            bits2.bit_field = changeAdjacentBits(value);

            printf("\n %d (decimal)\n", bits2.bit_field);
            printBinary(bits2.bit_field); // 'printBinary' prints number in binary format
        }

        // function goes to the operation nr.7, which counts how many there are identical bits at the same position
        else if (operation == 7)
        {
            int count; // 'count' stores the number of identical bits at the same position

            // user enters the values to 'val1' and 'val2' variables
            printf("\n Enter first number: ");
            scanf(" %d", &val1);
            printf("\n Enter second number: ");
            scanf(" %d", &val2);

            // 'count' stores the return value from the function 'howManyIdenticalBits'
            count = howManyIdenticalBits(val1, val2);

            // output is printed into console
            printf("\n %d (decimal)\n", bits1.bit_field);
            printBinary(bits1.bit_field);
            printf("\n %d (decimal)\n", bits2.bit_field);
            printBinary(bits2.bit_field);

            // number of identical bits at the same position is printed into console
            printf("\n Number of the identical bits at the same position: %d\n", count);
        }
    } while (operation != 8); // 'do_while' controls the workflow of user menu

    printf("\n Program has been closed... Thank You!!!\n\n");

    // signal to operating system that program ran fine
    return 0;
}
