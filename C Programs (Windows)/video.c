#include<stdio.h>

//declaration/prototype
void hello();
void goodbye();

int main()
{
    hello();//call
    hello();
    goodbye();
    return 0;
}

//function definition.
void hello()
{
    printf("Hello.\n");
}
void goodbye()
{
    printf("Good Bye:)\n");
}