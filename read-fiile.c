#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("read-file.txt","r");
    
  int ch;

    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);
    
    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);

    fscanf(fptr,"%d",&ch);
    printf("%d\n",ch);

    fclose(fptr);
    return 0;
}