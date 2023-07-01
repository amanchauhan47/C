#include<stdio.h>
int main()
{
    char pass[100],ch;
    int i;

    for(i=0; ch!='\n' ;i++)
    {
        scanf("%c",&ch);
        pass[i] = ch;
        if(ch==10)
        {
            for(char j=49; j<=51 ;j++)
            {
                pass[i] = j;
                //printf("%c\n",pass[i]);
                i++;
            }
        }
    }
    pass[i]='\0';

    //puts(pass);
    for(int i=0;i<7;i++)
    {
        printf("%c",pass[i]);
    }
    return 0;
}