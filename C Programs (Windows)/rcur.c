#include<stdio.h>
void recur();
int main()
{
    int a;

    recur();
    return 0;
}

void recur(){
    printf("Hello World");
    //recur(); This is called recursion (when a function calls itself)
}