#include<stdio.h>
void swap(int a,int b);
void _swap(int *a, int *b);

int main()
{
    int a=3 ,b=4;
    swap(a,b);
    printf("a = %d && b = %d\n\n",a,b);
    
    
    _swap(&a,&b);
    printf("a = %d && b = %d\n",a,b);

    return 0;
}

void swap(int a,int b){
    int c;

    c=a;
    a=b;
    b=c;
    
    //printf("a = %d && b = %d\n",a,b);
}

void _swap(int *a,int *b){
    int c;

    c=*a;
    *a=*b;
    *b=c;
    
    //printf("a = %d && b = %d\n",*a,*b);
}