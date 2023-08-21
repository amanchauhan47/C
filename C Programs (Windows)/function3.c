#include<stdio.h>
//                  Without Argument with Return Value
int number(){
    int i;
    printf("Enter the number:");
    scanf("%d",&i);
    return i;
}
int main()
{   int x;
    x=number();
    printf("%d",x);
}