#include<stdio.h>
#include<string.h>
void salting(char str[]);
int main()
{
    char pass[100];
    char salt[]="123";

    scanf("%s",pass);
    salting(pass);
    //strcat(pass,salt);
   // puts(pass);

    return 0;
}

void salting(char str[]){
    char salt[] = "123";

    strcat(str,salt);
    puts(str);
}