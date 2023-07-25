#include<stdio.h>
int main()
{
    char name[] = "i am the boss";
    int i,count;

    for(i=0;name[i]!='\0';i++)
    {
        count++;
        if(name[i] == 32)
        {
            count --;
        }
    }
    printf("%d\n",count);

    return 0;
}