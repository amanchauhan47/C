#include<stdio.h>
//                          Minimum element of array
int main()
{
    int array[5]={1,9,10,45,99};
    int d,i;
    //d=array[0];

    //printf("%d\n",array[i+1]);
    for(i=0;i<5;i++)
    {
        if(array[i]<array[0]) // array[i] > d;
        {
            array[0]=array[i];// d = array[i];
        }
    }
    printf("%d\n",array[0]);

}