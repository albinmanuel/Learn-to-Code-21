//Write a C Program to determine the factorial of a number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,num,f=1;
    
    scanf("%d",&num);
    
    if(num!=0)
    {
        for(a=1;a<=num;a++)
        {
            f = f * a;
        }
        
        if(num>0)
            printf("%d",f);
        
        else
            printf("ERROR");
    }
    
    else
        printf("1");
    
    
    
       
    return 0;
}
