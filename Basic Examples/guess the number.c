#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main()
{
    printf("***********************************************************\n");
    printf("**----------------Welcome to Guessing Game---------------**\n");
    printf("**---------You can guess if you understand the MATH -----**\n");
    printf("**---------------------------------------------------------\n");
    printf("\n\n");
    
    const int MAX_CHANCES = 7;  // a constant, to hold the Maximum possible chances
    int computer_guess;  // for storing the guess by this program.
    
    long seed = time(NULL);  // get the current system time that we will use as seed
    srand(seed);    // set the seed using the srand function
    
    computer_guess = rand() % 100;  // let your program guess a 2 digit number
    
    // Prompt the user
    printf("Program has guessed a number, what you need to do is match it.\n");
    printf("Remember, you have only 7 chances.\n");
    printf("Best wishes...\n\n");
    
    int user_guess; // to store the input from user.
    int chance_count = 1; // to store chance number, maximum is MAX_CHANCES(7)
    int match = 0;        // if user successfully guessed the number, then assign 1 to this variable
                          // initially it is 0 as user yet to find the number.
    
    // iterate in a loop, as long as not found and chance_count <= MAX_CHANCES
    while(chance_count <= MAX_CHANCES && match != 1)
    {
        printf("Enter your number: ");  // prompt the user to enter their guess.
        scanf("%d", &user_guess);
        
        // if the user_guess is greater than the computer_guess, then print "Your guess is high",
        // also print, number of steps remaining.
        if(user_guess > computer_guess)
        {
            printf("Your guess is high\n");
            printf("Number of remaining chance: %d\n", MAX_CHANCES - chance_count);
        }
        // other wise if the user_guess is less than the computer_guess then, print "Your guess is low"
        // also print number of steps remaining.
        else if(user_guess < computer_guess)
        {
            printf("Your guess is low.\n");
            printf("Number of remaining chance: %d\n", MAX_CHANCES - chance_count);
        }
        else
        {
            printf("Bingo!! You have won the game.\n");
            printf("You guessed that in %d chances.\n", chance_count);
            match = 1;
        }
        printf("\n\n");
        chance_count++; // increment the chance_count for the next iteration.
    } // end of while loop
    
    if(match == 0)
        printf("Game over!!! Try to be Mathematical.\n");
    
    if(chance_count <= 3)
        printf("You are Super Duper NINJA!\n");
    else if(chance_count > 3 && chance_count <=5)
        printf("You are Crezy NINJA!\n");
    else if(chance_count > 5 && chance_count <= 7)
        printf("You have potential to be a NINJA!\n");

    
    return 0;
}


