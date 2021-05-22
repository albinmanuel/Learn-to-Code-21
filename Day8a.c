//Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,qua,rem,r=0;
    
    scanf("%d",&n);
    
    qua = n;
    
    while(qua!=0)
    {
        rem = qua % 10;
        r = r*10 + rem;
        qua = qua/10;
        
    }
    
    if(r==n)
        printf("Yes");
    else
        printf("No");
    
    
    return 0;
}
