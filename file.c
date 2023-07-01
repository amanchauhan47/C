#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("newfile.txt","w");
    
    if(fptr == NULL)
    {
        printf("Does not exist.");
    }
    else{
        fclose(fptr);
    }
    
    return 0;
}