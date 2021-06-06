//Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.

#include <stdio.h>


int main() 
{
    int a[100],i,num;
    
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("DISPLAYING USING INDEX: ");
    for(i=0;i<num;i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0;i<num;i++)
    {
        scanf("%d",a+i);
    }
    printf("\n");

    printf("DISPLAYING USING POINTERS: ");
    for(i=0;i<num;i++)
    {
        printf("%d ",*(a+i));
    }
  
    return 0;
}
