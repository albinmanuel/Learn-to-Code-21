//Write a C program to read n values from the user and store it in the array. Reprint the values stored in the array and also print the value of second element in the array.

#include <stdio.h>

int main() 

{

    int array[25],num,i;

    

    scanf("%d\n",&num);

    

    for(i=0;i<num;i++)

    {

        scanf("%d\n",&array[i]);

    }

    

    printf("Entered array: ");

    

    for(i=0;i<num;i++)

    {

        printf("%d ",array[i]);

    }

    

    printf("\n%d",array[1]);

    

    return 0;

} 

    
