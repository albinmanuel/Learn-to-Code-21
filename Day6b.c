//WACP to determine if a triangle is valid from the given sides.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int x,y,z;
    
    scanf("%d %d %d ",&x,&y,&z);
    
    if((x+y>z)&&(y+z>x)&&(x+z>y))
        printf("Yes");
    
    else
        printf("No");

      
    return 0;
}
