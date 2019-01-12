
// ********** FILE HANDLING **********

// https://overiq.com/c-programming-101/basics-of-file-handling-in-c/
// https://overiq.com/c-programming-101/fgets-function-in-c/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50


/*
 *  'fopen()' function - used to open a file
 * 
 *  e.g. fopen("myfile.txt", "r"); where: myfile.txt - name of the file, r - read mode
 * 
 * 
 *  'fgets()' function - used to read a string from the file pointed to by file pointer 'fp' 
 *                       into the memory pointed to by string array 'str' 
 *   
 *  e.g. fgets(str, SIZE, fp); where: str - pointer to string, SIZE - size of the string, fp - file pointer
 *  
 *  
 */

int main()
{
    // declare file pointer variable
    FILE *fp;

    // 'fopen()' function is used to open a file
    fp = fopen("myfile.txt", "r"); // 'r' - read mode 

    // 'if' checks for errors
    if(fp == NULL)
    {   // if error shows, print error message and exit the program
        printf("\n Error opening a file!\n");
        exit(1);
    }

    // 'str' is an array of 50 characters
    char str[SIZE];
    
    printf("\n Testing fgets() function:\n");
    printf("\n Reading contents of myfile.txt:\n\n");

    // 'while' loop is used to read the contents of myfile.txt
    while(fgets(str, SIZE, fp) != NULL)
    {   // string is printed using 'printf()' function
        printf(" %s", str);
    }
    printf("\n\n");

    // 'fclose()' closes the file
    fclose(fp);

    // signal to operating system that program ran fine
    return 0;
}