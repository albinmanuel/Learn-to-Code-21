//Write a C program to count and display the number of Vowels, Consonants and spaces in a string

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char a[100];
    
    fgets(a,100,stdin);
    int i,count=0,count1 = 0, count2 =0;
    for(i=0; a[i] != '\0'; i++)
    {  
    if(a[i] == ' ')
     count++;
    else if( a[i]=='a' || a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
     count1 ++;
    else 
     count2++;
    }
    
    printf( "%d\n%d\n%d",count1,count2,count);
    
  
    return 0;
}
