// **************** DICE ROLL GAME ****************


#include <stdio.h>  // for standard I/O operations
#include <time.h>   // for time function
#include <stdlib.h> // for rand function

int main()
{
    int d1, d2; //two dices
    long t; //time variable
    int user_guess; //user guess of the sum
    int computer_guess_sum; //sum of the computer guess
    int correct = 0, incorrect = 0; //correct and incorrect guessing
    int score = 0; //sum of the points
    int iteration = 1; //iterating while loop
    
    do
    {
        t = time(NULL);
        srand(t);
        d1 = ((rand() % 6) + 1); //roll for dice 1
        d2 = ((rand() % 6) + 1); //roll for dice 2
        
        printf("Computer rolled two dices...Guess the sum!\n");
        printf("Enter any value <= 0 to terminate the program.\n");
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        
        computer_guess_sum = d1 + d2;
        
        if(user_guess <= 0)
        {
            printf("Game over. Goodbye!\n");
            iteration = 0;
        }
        else if(computer_guess_sum == user_guess)
        {
            printf("Bravo! You were correct! +10\n\n");
            ++correct;
            score += 10;
            printf("Total Correct: %d\n", correct);
            printf("Total Incorrect: %d\n", incorrect);
            printf("Score: %d\n\n", score);
        }
        else
        {
            printf("Darn!!! Bad attempt. -5\n");
            printf("Sum was: %d\n\n", computer_guess_sum);
            ++incorrect;
            score -= 5;
            printf("Total Correct: %d\n", correct);
            printf("Total Incorrect: %d\n", incorrect);
            printf("Score: %d\n\n", score);
        }
        
        
    }while(iteration == 1);
   
    return 0;
}
