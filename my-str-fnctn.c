#include<stdio.h>
//                      To be Continue...
void print(char str[]);
char scan(char *str);
int main()
{   
    char str[]="Hello World";
    char *n;
    n = scan(str);
    print(n);

    return 0;
}
char scan(char *str){
    int i;
    for(i=0;str[i]==10;i++)
    {
        scanf("%c",&str[i]);
    }
    return *str;
}

void print(char str[]){
    int i;
    for( i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    
}