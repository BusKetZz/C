
// ********** FILE HANDLING **********

// https://overiq.com/c-programming-101/fprintf-function-in-c/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 50


/*
 *  
 * 'fprintf()' function - used to write formatted data into the file,
 *                        on success it returns the total number of
 *                        characters written to the file, on error
 *                        it returns EOF
 * 
 *  
 */

int main()
{
    // declare file pointer variable
    FILE *fp;

    // 'fopen()' function is used to open a file
    fp = fopen("records.txt", "w"); // 'w' - write mode 

    // 'if' checks for errors
    if(fp == NULL)
    {   // if error shows, print error message and exit the program
        printf("\n Error opening a file!\n");
        exit(1);
    }

    char name[SIZE]; // 'str' is an array of 50 characters
    int roll_no; // 'roll_no' stores roll number
    int chars; // 'chars' stores total number of characters
    float marks; // 'marks' stores the mark value
    int n; // 'n' stores the number of records

    printf("\n Testing fprintf() function:\n");
    
    // user is prompt to enter amount of records 
    printf("\n Enter the number of records you want to enter: ");
    scanf(" %d", &n);

    // 'for' loop iterates until 'i' is greater than 'n'
    for(int i=0; i<n; i++)
    {   // 'fflush()' remove the contents of the standard input
        fflush(stdin);
        printf("\n Enter the details of student nr.%d\n\n", i+1);

        printf(" Enter name of the student: ");
        scanf(" %s", name);

        printf(" Enter roll number: ");
        scanf(" %d", &roll_no);

        printf(" Enter marks: ");
        scanf(" %f", &marks);

        // 'fprintf()' returns number of characters written to the file and saves it in 'chars' variable
        chars = fprintf(fp, " Name: %s\t\t Roll number: %d\t\t Marks: %.2f\n", name, roll_no, marks);

        // 'printf()' prints the number of characters saved in the 'chars' variable
        printf("\n %d characters successfully written to the file...\n\n", chars);

    }

    // 'fclose()' closes the file
    fclose(fp);

    // signal to operating system that program ran fine
    return 0;
}