#include<stdio.h>      
int sum(int a, int b); //Declaration of Function
int main()

{
    int a=1,b=2,c;

    c=sum(a,b);         //Function Calling

    printf("%d",c);
}
int sum(int a, int b){      //Defination
    return a+b;
}
