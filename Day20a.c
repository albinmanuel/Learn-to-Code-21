//Write a C program to find the factorial of a given number using a recursive function

#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else 
        return (n*factorial(n-1)); 
}

int main() 
{
    int num;
    scanf("%d",&num);
   
    if(num>=0)
    { 
        printf("%d",factorial(num));
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}


