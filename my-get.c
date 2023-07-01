#include<stdio.h>
void prstr(char *array);
int main()
{
    char array[1000];

   prstr(array);
    return 0;
}

void prstr(char *array){
    int i;

    for(i=0;1;i++)
    {
        scanf("%c",&array[i]);
        if(array[i]==10)
        {
            break;
        }
    }
    int l=i;
    for(i=0;i<l;i++)
    {
        printf("%c",array[i]);
    }
}