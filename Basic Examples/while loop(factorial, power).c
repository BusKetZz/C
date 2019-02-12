//
//  main.c
//  C Programming Testing File
//
//  Created by Jakub Standarski on 06/08/2018.
//  Copyright © 2018 Jakub Standarski. All rights reserved.
//

#include <stdio.h>
#include <math.h>
/*
 
 When the program executes it will work in the following way:
 You must accomplish all the menu options and validation checkings exactly as asked.
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 
 What you want to do? 1
 Enter number: -1
 Invalid number for factorial
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 What you want to do? 1
 Enter number: 5
 Factorial of 5 is 120
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 
 What you want to do? 20
 This program can find factorials only in the range 0 - 10
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 What you want to do? 2
 Enter a: 2
 Enter b: 5
 2^5 = 32.0
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 What you want to do? 5
 Invalid menu option
 
 ---- MENU ----
 1. Find factorial
 2. Find a^b
 3. Quit
 What you want to do? 3
 
 *** Thank you ***
 
 NOTE: You should use library function pow to find a^b, no need to write code
 for finding a^b.
 
 */

int main()
{
    int quit = 0;
    int n;  // n is the number for which you will find factorial
    int p;  // you are going to keep the factorial of n in p
    double base, exp; // for a^b
    
    int option; // for keeping the menu option
    while(!quit){
        printf("----- MENU -----\n1. Find factorial\n2. Find a^b\n3. Quit\n\nWhat do you want to do? ");
        scanf("%d", &option);
        
        if(option == 1)
        {
            printf("Enter number: ");
            scanf("%d", &n);
            int i;
            i = n;
            
            if(n <= 0)
                printf("Invalid number for factorial!\n\n");
            else if(n > 10)
                printf("This program can find factorials in the range of 0-10\n\n");
            else
            {
                p = 1;
                while(n > 0)
                {
                    p *= n--;
                }
            printf("Factorial of %d is %d\n\n", i, p);
            }
        }
        
        else if(option == 2)
        {
            
            printf("Enter a: ");
            scanf("%lf", &base);
            printf("Enter b: ");
            scanf("%lf", &exp);
            
            double j;
            j = pow(base, exp);
            printf("%.0lf^%.0lf = %.1lf\n\n", base, exp, j);
            j = 0;
        }
        else if(option == 3)
        {
            printf("*** Thank you ***\n");
            quit = 1;
        }
        else
            printf("Invalid menu option\n\n");
        
    }
    
    
}
