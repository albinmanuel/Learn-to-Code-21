//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>

int main() 
{
    int arr[20],num,i;
    int e=0,o=0;
    
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<num;i++)
    {
        if(arr[i]%2 == 0)
        {
            e = e + 1;
        }
            
        else
        {
            o = o + 1;
        }
        
    }
    
    printf("%d\n",e);
    printf("%d",o);
     
    return 0;
}

            o = o + 1;

        }

        

    }

    

    printf("%d\n",e);

    printf("%d",o);

     

    return 0;

}
