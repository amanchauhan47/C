#include<stdio.h>
//                  Input string from user using %c.
int main()
{
    char array[100];
    int i;
    char ch;
    for(i=0; ch!='\n' ;i++)
    {
        scanf("%c",&ch);
        array[i] = ch;
    }
    array[i]='\0';
    puts(array);

    return 0;
}