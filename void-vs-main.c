#include<stdio.h>
void alter(int a){
   a = 9;
}
int change(int a){
    a = 100;
    return a;
}
int main()
{
    int a = 3;

    //alter(a);
    change(a);
    printf("%d\n",a);

    return 0;
}