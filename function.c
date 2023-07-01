#include<stdio.h>
//                      Call by Value and Call by Reference

void value (int n);
void refer (int *n);
int main ()
{
    int num = 5;
    value(num);
    printf("num is %d\n\n",num);

    refer(&num);
    printf("num is %d\n",num);
    
}
//call by value
void value (int n){
    n = n * n;
    printf("square is %d\n",n);
}

//call by reference
void refer (int *n){
    *n = (*n) * (*n);
    printf("square is %d\n",*n);
}