// ***** Program to calculate the length of the string using a pointer (call by reference) *****

#include <stdio.h>
#include <stdlib.h>

/*
 *
 * Program to calculate the length of the string using a pointer (call by reference)
 *
 */
int lengthOfTheString(char *string)
{
    int characters = 0;
    while(*string != '\0')
    {
        string++;
        characters++;
    }
    return characters;
}


int main()
{
    char string[100];
    printf("\n Pointer : Program to calculate the length of the string using a pointer :\n");
    printf("----------------------------------------------------------------------------\n");
    printf(" Input the string: ");
    scanf("%[^\n]", string);
    int length;
    length = lengthOfTheString(string);
    printf("\n");
    printf(" Length of the string : %d\n", length);
    
    return 0;
}