//Write a C program to swap the values of two variables.

#include <stdio.h>

void swap(int x ,int y)
{
    int tem;
    tem = x;
    x = y;
    y = tem;
    printf("a=%d b=%d",x,y);
}

int main() 
{
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    printf("a=%d b=%d\n",a,b);
    
    swap(a,b);
    
    return 0;
}


