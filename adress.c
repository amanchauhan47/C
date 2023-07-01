#include<stdio.h>

//          Will the Address Output be same ?

void printaddress(int *n){ 
    printf("%p\n",n); 
}

int main()
{
    int n=4;

    printf("%p\n",&n);

    printaddress(&n); 


    return 0;
}