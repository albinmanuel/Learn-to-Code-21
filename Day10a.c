//The Fibonacci Series is a mathematical series that starts with 0 and 1 and is generated by adding the two preceding numbers to generate the next one

#include<stdio.h>
int main() 
{
    int x, y, result, n, i;
    
    scanf("%d", &n);
    
    x=0;
    y=1;
    
    for(i=1; i<=n; i++) 
  {
        
        printf("%d ", x);
        result= x+y;
        x = y;
        y= result;
  } 
} 

        
