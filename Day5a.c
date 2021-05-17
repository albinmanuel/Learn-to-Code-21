//In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ" and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    
    for(n=1;n<=100;n++)
    {
        if((n%3!=0)&&(n%5!=0)&&(n%15!=0))
            printf("%d ", n );
        
        if((n%3==0)&&(n%15!=0))
            printf("FIZZ ");
        
        if(n%15==0)
            printf("FIZZBUZZ ");
        
        if((n%5==0)&&(n%15!=0))
            printf("BUZZ ");
        
        
    }

    
    
    return 0;
}
