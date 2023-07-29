#include<stdio.h>
//                                      Array Sorting with another method (Self Created)                            29-07-23
int main()
{
    int array[5] = {5,4,3,2,1};
    int i,j,c;

    for(j=0;j<4;j++)
    {
        for(i=j;i<4;i++)
        {
            //printf("%d",i);
            if(array[j] > array[i+1])
            {
                c = array[j];
                array[j] = array[i+1];
                array[i+1] = c;
            }
            
            //checking the logic line by line (same as i thought)
            // for(int i=0;i<5;i++)
            // {
            //     printf("%d\t",array[i]);
            // }
            //printf("\n");
        }
        
    }
    //printing the sorted array
    for(int i=0;i<5;i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}