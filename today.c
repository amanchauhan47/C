#include<stdio.h>
void printstring(char str[]);
int main()
{
    char str[100];
    char ch;
    int i;

    
    return 0;
}
void printstring(char str[])
{
    for(int i=0;str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
}