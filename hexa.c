#include<stdio.h>
int main()
{
    unsigned char c=4,k;
    k=~c;

    printf("%%d is %d\n",k);
    printf("%%x is %x\n",k);
    printf("%%X is %X\n",k);
    printf("%%#x is %#x\n",k); //this is cool
    printf("%%#X is %#X\n",k);
}