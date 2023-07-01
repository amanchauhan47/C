#include<stdio.h>                   //++i vs i++
int main()
{
    int array[5]={1,2,7,3,6};
    int i;
    for( i=0;i<5;++i)
    {
        printf("%d %d\t",i,array[i]);
    }
    printf("\n%d\n",i);


    for( i=0;i<5;i++)
    {
        printf("%d %d\t",i,array[i]);
    }
    printf("\n%d\n",i);
    return 0;
}