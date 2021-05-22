//WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int x,y,z;
    float p;
    
    scanf("%d %d %d ",&x,&y,&z);
    
    p = (x+y+z)/3.00;
    
    printf("%.2f\n",p);
    
    if(p>=90)
        printf("A");
    
    if(p>=80 && p<90)
        printf("B");
    
    if(p>=70 && p<80)
        printf("C");
    
    if(p>=60 && p<70)
        printf("D");
    
    if(p>=40 && p<60)
        printf("E");
    
    if(p<40)
        printf("F");
    
    
    return 0;
}
