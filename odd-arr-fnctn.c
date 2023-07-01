#include<stdio.h>
int countodd(int array[],int size);
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};

    printf("There are %d Odd numbers.\n",countodd(array,5));

    return 0;
}
int countodd(int array[], int size){
    int count=0;
    for(int i=0;i<size;i++)
    {   //printf("%d\n",array[i]);
        if(array[i]%2==0)
        {
            continue;
        }
        count=count+1;
        //printf("%d\t",array[i]);
    }
    return count;
}