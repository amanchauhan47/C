#include<stdio.h>
//                  Sum, Product and Average By Call by Reference

void doWork(int a, int b, int *sum, int *product, int *average);
int main()
{
    int a=3,b=5;
    int sum, average, product;

    doWork(a,b,&sum,&product,&average);

    printf("Sum is     %d\n",sum);
    printf("Product is %d\n",product);
    printf("Average is %d\n",average);
}

void doWork(int a, int b, int *sum, int *product, int *average){
    *sum = a + b;
    *product = a * b;
    *average = (a+b)/2;
}