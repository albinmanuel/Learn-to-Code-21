//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[5][5],m,n;
    int i,j;
    scanf("%d",&m);
    scanf("%d",&n);
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }         
    }

    if (m != n) 
    {
         printf("ERROR");
    }

    else if(m == n)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                    printf("%d ",arr[i][j]);
            }  
            
        }
        
        printf("\n");
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j == m-1)
                    printf("%d ",arr[i][j]);
            }
        }
    }
    
    return 0;
}
