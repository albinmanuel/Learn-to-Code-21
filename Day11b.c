//myarray[10] ={10,25,8,14,3,23,1,0,12,9} Write a C program to

#include <stdio.h>

int main() 

{

    int myarray[10] ={ 10, 25, 8, 14, 3, 23, 1, 0, 12, 9};

    int i;

    myarray[2] = 30;

    

    printf("%d\n",myarray[3]);

    printf("%d\n",myarray[9]);

    printf("%d\n",myarray[2]);

    

    for(i=0;i<10;i++)

    {

        printf("%d ",myarray[i]);

    }

    

  

    return 0;

}
