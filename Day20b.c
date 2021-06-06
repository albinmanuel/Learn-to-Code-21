//Write a C program to find the second maximum element in an array of integer elements

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int arr[100],num,i,l1,l2;
    
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    l1 = l2 = -50;
    
    for(i=0;i<num;i++)
    {
        if(arr[i]>l1)
        {
            l2 = l1;
            l1 = arr[i];
        }
        
        else if(arr[i]>l2 && arr[i]<l1)
        {
            l2 = arr[i];
        }
    }
    
    printf("%d",l2);
    
   
    return 0;
}
