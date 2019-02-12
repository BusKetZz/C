// ************* Palindrome Finder *************

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, begin = 0, beginA = 0, beginB = 0, end;
    char string[100], a[100], b[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", string);
    
    end = strlen(string);
    
        for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]==' '||string[i]=='.'||string[i]==','||string[i]=='!'||string[i]=='?')
            continue;
        else
        {
            a[beginA] = string[i];
            beginA++;
        }
    }
    a[beginA] = '\0';
    
    for(j=end-1; string[j]>=0; j--)
    {
        if(string[j]==' '||string[j]=='.'||string[j]==','||string[j]=='!'||string[j]=='?')
            continue;
        else
        {
            b[beginB] = string[j];
            beginB++;
        }
    }
    b[beginB] = '\0';
    
    if(strcasecmp(a, b) == 0)
        printf("Yes, it is a palindrome.\n");
    else
        printf("No, this is not a palindrome.\n");
    
    
    return 0;
}

