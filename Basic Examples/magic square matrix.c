// ***************** Magic Square Matrix *****************

#include <stdio.h>  // for standard I/O operation
#include <math.h>


int main()
{
    int n; //dimension of the magic square
    
    printf("Enter the dimension of Magic Square 1 (Only ODD dimension >=1 and <=15 accepted): ");
    scanf("%d", &n);
    printf("\n");
    
    if(n%2 == 0 || n<1 || n>15)
    {
        printf("Invalid input!!!\nValid values are odd integers between 1 and 15\n");
        return 0;
    }
    int x[n][n]; //2D array with dimensions nxn
    int i, j;
    
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
            x[i][j]=0;
    }
    int row, column;
    
    row = n-1;
    column = n/2;
    
    int k, r, c;
    for(k=1; k<=pow(n,2); k++)
    {
        x[row][column] = k;
        r = row; //row before increment
        c = column; //column before increment
        ++row;
        ++column;
        
        if(row == n)
            row = 0;
        if(column == n)
            column = 0;
        if(x[row][column])
        {
            row = r;
            column = c;
            row -= 1;
        }
    }
    
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
            printf("%3d  ", x[i][j]);
        printf("\n");
    }
    
    printf("Magic square generated with dimension %d and magic constant: %d\n\n", n, n*(n*n+1)/2);
    
    return 0;
}
