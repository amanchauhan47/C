#include<stdio.h>
int main()
{
    int array[5] = {4,9,1,5,2};
    int num = 0;    
    int sort = 0;  

    for(int i=0;i<5;i++)
    {
        if(array[i]>num)
        {
            num = array[i];
        }
    }

    printf("%d\n",num);

    // for(int i=0;i<5;i++)
    // {
    //     if(array[i] > sort)
    //     {
    //         if(num > array[i])
    //         {
    //             sort = array[i];
    //         }
    //     }
    // }

    for(int i=0;i<4;i++)
    {
        for(int i=0;i<5;i++)
        {
        if(array[i] > sort && num > array[i])
            {
            sort = array[i];
            }
        }
        printf("%d\n",sort);
        num = sort;
        sort = 0;
    }
    // printf("Second number is  %d\n",sort);

    // num = sort;
    // sort = 0;

    

    // printf("Second number is  %d\n",sort);

    return 0;
}