// ******** ROCK - PAPER - SCISSOR GAME ********

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_paper_scissor(int player1, int player2)
{
    int result;
    if(player1 == ROCK && player2 == PAPER)
        result = PLAYER2_WIN;
    else if(player1 == ROCK && player2 == SCISSOR)
        result = PLAYER1_WIN;
    else if(player1 == PAPER && player2 == ROCK)
        result = PLAYER1_WIN;
    else if(player1 == PAPER && player2 == SCISSOR)
        result = PLAYER2_WIN;
    else if(player1 == SCISSOR && player2 == PAPER)
        result = PLAYER1_WIN;
    else if(player1 == SCISSOR && player2 == ROCK)
        result = PLAYER2_WIN;
    else
        result = DRAW;
    
    return result;
}

int get_user_input()
{
    int choice;
    do{
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Please input [1, 2, 3]: ");
        scanf("%d", &choice);
        if( !(choice>=1 && choice<=3) )
            printf("ERROR -- Invalid input, should be 1 or 2 or 3");
    }while( !(choice>= 1 && choice<=3) );
    
    return choice;
}

void print_word(int v)
{
    if(v == ROCK)
        printf("Rock\n");
    else if(v == PAPER)
        printf("Paper\n");
    else if(v == SCISSOR)
        printf("Scissor\n");
}


int main()
{
    int user_score = 0;
    int computer_score = 0;
    srand(time(NULL));
    
    int quit = 0;
    while(!quit)
    {
        int user_input = get_user_input();
        int computer_choice = (rand() % 3) + 1;
        
        printf("\n");
        printf("Computer chose: ");
        print_word(computer_choice);
        printf("User chose: ");
        print_word(user_input);
        
        int result = rock_paper_scissor(user_input, computer_choice);
        if(result == DRAW)
            printf("It is a draw\n");
        else if(result == PLAYER1_WIN)
        {
            printf("User won and computer lost the round\n");
            user_score++;
        }
        else if(result == PLAYER2_WIN)
        {
            printf("Computer won and user lost the round\n");
            computer_score++;
        }
        
        printf("\n");
        printf("-------------------------------\n");
        printf("User score: %d\n", user_score);
        printf("Computer score: %d\n", computer_score);
        printf("-------------------------------\n");
        printf("\n\n");
        
        printf("If you want to continue input any integer, 0 to terminate.");
        int response;
        scanf("%d", &response);
        if(response == 0)
            quit = 1;
    }// end of while
    
    printf("Final score...\n");
    printf("\n");
    printf("-------------------------------\n");
    printf("User score: %d\n", user_score);
    printf("Computer score: %d\n", computer_score);
    printf("-------------------------------\n");
    printf("\n");
    if(user_score == computer_score)
        printf("GAME WAS A DRAW\n\n");
    else if(user_score > computer_score)
        printf("USER WINS THE GAME\n\n");
    else
        printf("COMPUTER WINS THE GAME\n\n");
    
    return 0;
}
