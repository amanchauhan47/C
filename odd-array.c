#include<stdio.h>
//              Print only odd number in Array (Self Created)
int main()
{
    int array[5]={1,2,3,4,5};
    int d=0;

    for(int i=0;i<5;i++)
    {
        // if(array[i]%2==0)
        // {
        //     continue;
        // }
        // printf("%d\n",array[i]);
        // d=d+array[i];

        if(array[i]%2!=0) //odd
        {
            d=d+1;
        }
    }

    
    //Print the count of Array
    printf("%d\n",d);
    return 0;
}