#include<stdio.h>
int main()
{
    char str[100];
    int i;
    int count = 0;

    fgets(str,100,stdin);
    for(i=0; str[i]!='\0' ;i++)
    {  
        printf("%c",str[i]);
        count++;
    }
    printf("count is %d\n",count);
    printf("i is %d\n",i);
}