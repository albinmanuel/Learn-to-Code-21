//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a,b,c,d,a1; float a2, a3;
           
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d %d",&c,&d);
            a1= a*a;
            a2= 3.14 * b *b ;
            a3= 0.5 * c * d;
            printf("%d\n",a1);
             printf("%.1f\n",a2);
             printf("%.2f\n",a3);
  
    return 0;
}
