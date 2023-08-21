#include<stdio.h>  
//                      Loop without loop (Self created)
int main()
{
    int a=1,b,c;

    aman:
    
    printf("\nHello World");
    if(a==4)
    {
        goto stop;
    }
    a=a+1;

    
    goto aman;

    stop:

    return 0;
}