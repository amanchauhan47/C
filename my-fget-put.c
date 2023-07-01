#include<stdio.h>
int gits(char *str, int n);
void pits(char *str);
int main()
{   
    char str[100];
    gits(str,5);
    pits(str);
}

int gits(char *str, int n){
    int i=0;
    char ch;
    for(i=0;ch!='\n';i++)
    {
        scanf("%c",&ch);
        str[i] = ch;
    }
    str[i]='\0';
    return *str;
}
void pits(char *str){
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}