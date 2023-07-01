#include<stdio.h>
int main()
{
    int array[5] = {1,2,12,80,7};
    int num = array[0];

    for(int i=0;i<5;i++)
    {
        if(array[i]>num)
        {
            num = array[i];
        }
    }
    printf("%d\n",num);
    return 0;
}