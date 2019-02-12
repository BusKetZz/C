// *************** Matrix and Transpose ***************

#include <stdio.h>  // for standard I/O operation

int main()
{
    int m; //number of rows
    int n; //number of columns
    
    
    printf("Enter number of rows (3-10): ");
    scanf("%d", &m);
    
    if(m<3 || m>10)
    {
        printf("Invalid number of rows!!!\n");
        return 0;
    }
    else
    {
        printf("Enter number of columns (3-10): ");
        scanf("%d", &n);
        
        if(n<3 || n>10)
        {
            printf("Invalid number of columns!!!\n");
            return 0;
        }
        else
        {
            int x[m][n]; //matrix given by the user
            int i, j;
            for(i=0; i<m; ++i)
            {
                for(j=0; j<n; ++j)
                {
                    printf("Matrix [%d][%d]: ", i,j);
                    scanf("%d", &x[i][j]);
                }
            }
            printf("Matrix as given by you:\n");
            for(i=0; i<m; ++i)
            {
                {
                    for(j=0; j<n; ++j)
                        printf("\t%d\t", x[i][j]);
                    printf("\n");
                }
            }
            printf("\n\n");
            printf("Transpose of the given matrix:\n");
            for(j=0; j<n; ++j)
            {
                for(i=0; i<m; ++i)
                    printf("\t%d\t", x[i][j]);
                printf("\n");
            }
        }
    }
    
    return 0;
}
