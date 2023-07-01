#include<stdio.h>
//                  Binary Complement Program Using Array (Self Created)
int main()
{
    char array[100];
    char i,j;

    printf("Enter the Binary Number: ");
    for(i=0;1;i++)
    {
        scanf("%c",&array[i]);
        if(array[i]==10)
        {
            break;
        }
    }

    j=i;
    printf("Complement the given binary is: ");
    for(i=0;i<j;i++)
    {
        if(array[i]==49 || array[i]==48)
        {
            if(array[i]==49)    //49 = 1 (in ASCII value)
            {
                array[i]=48;    //48 = 0 (in ASCII value)
            }
            else{
                array[i]=49;
            }
            printf("%c",array[i]);
        }
    }
    printf("\n");
    return 0;
}