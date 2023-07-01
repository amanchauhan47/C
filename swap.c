#include<stdio.h>

void value(int a, int b);
void refer(int *a, int *b);

int main()
{
    int a=3,b=5,c;

    value(a,b);
    printf("a is %d & b is %d\n\n",a,b);


    refer(&a,&b);
    printf("a is %d & b is %d\n",a,b);

    
    return 0;
}

void value(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("a is %d & b is %d\n",a,b);
}

void refer(int *a, int *b){
    int i=0;
    int *c=&i;

    *c=*a;
    *a=*b;
    *b=*c;
    printf("a is %d b is %d\n",*a,*b);

}