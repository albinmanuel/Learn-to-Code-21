//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).

#include <stdio.h>

int main() 
{
  int array[100][100], m,n,x;
    int c=0;
    scanf("%d%d",&m,&n);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    scanf("%d",&x);
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
    {
        if(array[i][j]==x)
    { 
         c=1;
         printf("Element found at (%d,%d)\n",i,j);
    }
    }
    }    
    if(c!=1)
        printf("Element not found");
    return 0;
}
