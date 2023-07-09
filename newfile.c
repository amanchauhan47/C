#include<stdio.h>
int main()
{
    char str[100] = "Hello";
    char str2[100] = " World";
    int j;

    for(int i=0;1;i++)
    {
        if(str[i] == '\0')
        {
            for(j=0; str2[j] != '\0' ;j++)
            {
                str[i] = str2[j];
                i++;
            }
            str[i] = '\0';
            break;
        }
    }
    puts(str);
    return 0;
}