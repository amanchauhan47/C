#include<stdio.h>
void printarray(){
    int array[5]={1,2,3,4,5},i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
}
int main()
{
    printarray();
    return 0;
}