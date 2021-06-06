//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>

void amg(int x)
{
    int rem,s=0,z;
    z = x;
    while(z != 0)
    {
        rem = z%10;
        s = s+(rem*rem*rem);
        z = z/10;
    }
    
    if(s == x)
        printf("Amstrong");
    else
        printf("Not Amstrong");
}

int main() 
{
    int num;
    
    scanf("%d",&num);
    
    amg(num);
  
    return 0;
}
