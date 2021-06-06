//Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.

#include <stdio.h>

void sum(int a,int b)
{
    int sum,rem,n=0,p=1,z,i;
    sum = a + b;
    printf("%d\n",sum);
    
    z = sum;
    
    if(z % 2 == 0)
    {
        while(sum != 0)
        {
            rem = sum % 10;
            n = n*10 + rem;
            sum = sum/10;
        }
        printf("%d",n);
    }
    
    else
    {
        for(i=2;i<=z-1;i++)
        {
            if(z % i == 0)
            {
                p = 0;
                break;
            }
        }
       
        
        if(p == 1)
     printf("Prime");

        else
     printf("Not prime");

   }
    
}

int main() 
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);    
    
    return 0;
}
        


       
        
 
