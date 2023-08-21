#include<stdio.h>
void sum(int a);
int main()
{
    sum(5);
    return 0;
}
void sum(int a){
    if(a==0)
    {
        return;
    }
    printf("Hello World\n");
    sum(a-1);
}