
// ********** FILE HANDLING **********

// https://overiq.com/c-programming-101/basics-of-file-handling-in-c/
// https://overiq.com/c-programming-101/fputc-function-in-c/

#include <stdio.h>
#include <stdlib.h>

/*
 *  'fopen()' function - used to open a file
 * 
 *  e.g. fopen("myfile.txt", "w"); where: myfile.txt - name of the file, w - write mode
 * 
 * 
 *   'fputc()' function - used to write a single character specified by the first argument
 *                       to a text file pointed by the file pointer
 * 
 *  e.g. fputc(ch, fp); where: ch - variable name, fp - file pointer
 */

int main()
{
    // declare file pointer variable
    FILE *fp;

    // 'fopen()' function is used to open a file
    fp = fopen("myfile.txt", "w"); // 'w' - write mode

    // 'if' checks for errors
    if(fp == NULL)
    {   // if error shows, print error message and exit the program
        printf("\n Error opening a file!\n");
        exit(1);
    }
    
    // prompt how to terminate the write procedure in different operating systems
    printf("\n Press Ctrl+Z (in Windows) or Ctrl+D (in Linux) to stop reading more characters\n\n");
    printf(" Enter text: ");

    int ch; // 'ch' variable to store characters in ASCII format
    
    // 'while' controls input by the user
    // if End Of File (EOF or -1) is reached, while stops doing its job
    // 'getchar()' is a function which takes an input from the user
    while((ch=getchar()) != EOF)
    {   // 'fputc()' writes character to the file
        fputc(ch, fp);
    }

    // 'fclose()' closes the file
    fclose(fp);

    // signal to operating system that program ran fine
    return 0;
}