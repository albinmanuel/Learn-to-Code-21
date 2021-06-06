//Write a C program to print inverted full pyramid of *

#include <stdio.h>

int main()
{
    int m,i,j,k;

    scanf("%d",&m);

    if(m>=1)
    {
        for(i=1;i<=m;i++)
        {
            for(j=1;j<(2*i)-1;j++)
            {
                printf(" ");
            }

            for(k=1;k<=(2*(m+1-i))-1;k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    else
    { 
         printf("ERROR");
    }

    return 0;
}


