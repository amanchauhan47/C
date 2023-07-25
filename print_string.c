#include<stdio.h>
#include<string.h>
void print_string(char str[]);
int main()
{
    char name[50] = "Aman ";
    char surname[50] = "Chauhan";

    print_string(name);
    print_string(surname);
    printf("\n");

    return 0;
}
void print_string(char str[]){
    for(int i=0;str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }
}