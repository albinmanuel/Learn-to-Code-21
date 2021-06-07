//Write a C program to find the number of prime numbers in a array of integers

#include <stdio.h>

int prime_count(int a)
{
    int i,m,count1=0;
    for(i=2;i<a;i++)
    {
        if(a % i == 0)
            count1++;
    }
    
    if (count1 == 0)
        m=1;
    else
        m=0;
    
 return m;
}

int main() 
{
    int a[100],n,i,count2=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime_count(a[i]) == 1)
            count2++; 
    }
    
    printf("%d",count2);
    
    return 0;
}
