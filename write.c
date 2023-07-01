#include<stdio.h>
//                      TEXT TO FILE (write mode) ..                                  
int main()
{
    FILE *fp;
    char ch;
    int i;

    printf("Enter the file's content and press Ctrl+Z and Enter to save: \n");
    fp = fopen("write.txt","w");
    while(1)
    {   
        scanf("%c",&ch);
        if(ch == 26)        //press ctrl+Z + Enter
        {
            break;
        }
        fprintf(fp,"%c",ch);
    }
    fclose(fp);

    return 0;
}