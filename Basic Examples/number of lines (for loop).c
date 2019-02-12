// ************ Q1 ************

#include <stdio.h>

int main()
{
    int n; // number of lines
    int i,j; // iteration variables
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for(i=n; i>=1; --i)
    {
        for(j=i; j>=1; --j)
            printf("*");
        printf("\n");
    }
    return 0;
}


// ************ Q2 ************

#include <stdio.h>

int main()
{
    int n; // number of lines
    int i,j; // iteration variables
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=i; ++j)
            printf("*");
        printf("\n");
    }
        
    
    for(i=n; i>=1; --i)
    {
        for(j=i; j>=1; --j)
            printf("*");
        printf("\n");
    }
    return 0;
}


// ************ Q3 ************

#include <stdio.h>

int main()
{
    int n; // number of lines
    int i,j, k=1; // iteration variables
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=i; ++j)
            printf("%2d ", k);
        printf("\n");
        ++k;
    }
    
    return 0;
}


// ************ Q4 ************

#include <stdio.h>

int main()
{
    int n; // number of lines
    int i,j, k=1; // iteration variables
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; ++i)
    {
        for(j=1, k=1; j<=i; ++j)
        {
            printf("%2d ", k++);
        }
        printf("\n");
    }
    
    return 0;
}


// ************ Q5 ************

#include <stdio.h>

int main()
{
    int n; // number of lines
    int i,j; // iteration variables
    int count = 0; // whether 0 or 1 to be printed
    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%2d ", count);
            count = !count;
            
        }
        printf("\n");
        count = i%2;
    }
    
    return 0;
}