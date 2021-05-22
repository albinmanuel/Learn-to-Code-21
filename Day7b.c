//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,x,y;
    
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    
    switch(n)
    {
        case 1: printf("%d",x+y);
            break;
            
        case 2: printf("%d",x-y);
            break;
            
        case 3: printf("%d",x*y);
            break;
            
        case 4: if(y>0)
        {
            printf("%.1f",x/(float)y);
        }
            else
            {
                printf("Cannot be determined");    
            }
                     
    }
                                        
    
    return 0;
}
