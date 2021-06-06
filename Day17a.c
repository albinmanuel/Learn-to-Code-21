//Write a C program to print half pyramid of numbers

#include <stdio.h>

int main()
{
    int m,i,j;

    scanf("%d",&m);

    if(m>=1)
    {
        for(i=1;i<=m;i++)
      {
            for(j=1;j<=i;j++)
        {
                printf("%d ",j);
         }
            printf("\n");
       }
     }

    else
    { printf("ERROR");
    }
    
    return 0;
}
