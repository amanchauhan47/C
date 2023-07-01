#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("notepad.txt","w");
    
    char ch;

    while (1) 
    {
        scanf("%c",&ch);
        if(ch == 10)
        {
            break;
        }
        fprintf(fptr,"%c",ch);
    }
    fclose(fptr);

    return 0;
}