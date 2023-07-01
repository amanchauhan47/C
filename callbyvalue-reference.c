//              Apna College(Call by value and call by reference)
#include<stdio.h>
int square(int n);
int _square(int *p);
int main()
{
    int n=4;
    printf("Call by Value (does not change the value of original variable)\n");
    printf("Call value:     %d\n",square(n));
    printf("Original value: %d\n\n",n);

    printf("Call by Reference (change the value of original variable)\n");
    printf("Call value:     %d\n",_square(&n));
    printf("Original value: %d\n",n);
    return 0;


}
int square(int n){
    n=n*n;
    return n;
}
int _square(int *p){
    *p=(*p)*(*p);
    return *p;
}
