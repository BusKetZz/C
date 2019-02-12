// ************* Find Longest Word *************

#include <stdio.h>  // for standard I/O operation
#include <string.h>


int main()
{
    char my_str[] = "In this programme we will find the longest word in a string";
    
    int longest = 0; //initially longest word length is 0
    char word[20]; //you will need to find each word from my_str and keep in this array
    char longestWord[20]; //will keep the current longest word here
    
    int i=0, j;
    
    while(my_str[i] != '\0')
    {
        j = 0; //index of word array
        while((my_str[i] >= 'A' && my_str[i] <= 'Z') || (my_str[i] >= 'a' && my_str[i] <= 'z'))
        {
            word[j] = my_str[i];
            ++j;
            ++i;
        }
        word[j] = '\0';
        if(strlen(word) >= strlen(longestWord))
        {
            longest = strlen(word);
            strcpy(longestWord, word);
        }
        if(my_str[i] == ' ')
            ++i;
    }
    printf("Longest word: %s\n", longestWord);
    printf("Length: %d\n", longest);
    
        
    
    return 0;
}


