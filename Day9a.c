//C program to print the HCF of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a,b,i,min,hcf;
    
    scanf("%d %d",&a,&b);
    
    min = (a<b)? a:b ;
    
    for(i=1;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
            hcf = i;   
    } 
    
    printf("%d",hcf);
    
    return 0;
}
