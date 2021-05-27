//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[100],a;
    int i,c=0;
    
    fgets(arr,100,stdin);
    
    scanf("%c",&a);
    
    for(i=0;i<strlen(arr);i++)
    {
        if(arr[i] == a)
        {
            c ++;
        }
    }
    
    printf("%d",c);
    
    return 0;
}

