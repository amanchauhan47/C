#include<stdio.h>
//                           Power function again..
int power(int num, int power);
int main()
{
    printf("%d\n",power(3,3));
    return 0;
}

int power(int num, int power){
    int d=1;
    for(int i=1;i<=power;i++)
    {
        d=d*num;
    }
    return d;
}