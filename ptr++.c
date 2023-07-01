#include<stdio.h>
int main()
{
    char ch = '*';
    char *ptr = &ch;

    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%u\n",ptr);
    return 0;
}