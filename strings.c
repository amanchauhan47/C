#include<stdio.h>
void printname(char string[]);
int main()
{   
    char firstname[]= "Aman";
    char secondname[]= "Chauhan";
    printname(firstname);

    printname(secondname);

    return 0;
}

void printname(char string[])
{
    for(int i=0;string[i]!='\0';i++)
    {
        printf("%c",string[i]);
    }
    printf("\n");
}