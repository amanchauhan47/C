#include<stdio.h>
int main()
{
    char array[100];
    
    fgets(array,100,stdin);
    puts(array);

    return 0;
}