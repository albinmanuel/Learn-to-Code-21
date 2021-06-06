//Write a C program that reads and displays details of 4 students. The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).

#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char firstname[50];
    float marks;
};

int main() 
{
    int i;
    struct student s[4];
    
    for(i=0;i<4;i++)
    {
        scanf("%d",&s[i].rollno);
        scanf("%s",s[i].firstname);
        scanf("%f",&s[i].marks);
    }
    
    for(i=0;i<4;i++)
    {
        printf("DETAILS OF ROLLNO %d",s[i].rollno);
        printf("\nNAME: %s",s[i].firstname);
        printf("\nMARKS: %.2f\n",s[i].marks);
    }
    
 
    return 0;
}
