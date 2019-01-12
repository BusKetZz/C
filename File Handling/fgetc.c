
// ********** FILE HANDLING **********

// https://overiq.com/c-programming-101/basics-of-file-handling-in-c/
// https://overiq.com/c-programming-101/fgetc-function-in-c/

#include <stdio.h>
#include <stdlib.h>


/*
 *  'fopen()' function - used to open a file
 * 
 *  e.g. fopen("myfile.txt", "r"); where: myfile.txt - name of the file, r - read mode
 * 
 * 
 *   'fgetc()' function - used to read a single character from the file and increments
 *                        the file position pointer
 *
 *  e.g. fgetc(fp); where: fp - file pointer
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

    int ch; // 'ch' variable to store characters in ASCII format
            // alternatively you can use variable of type 'char'
    
    printf("\n Reading contents of myfile.txt:\n\n");
   
    // 'while' loop is used to read characters one by one from the file
    // and prints it to the console using 'printf()' statement
    while((ch=fgetc(fp)) != EOF)
    {   
        printf(" %c", ch);
    }
    printf("\n");
    
    // 'fclose()' closes the file
    fclose(fp);

    // signal to operating system that program ran fine
    return 0;
}