#include<stdio.h>
#include<string.h>
//           Count String lenght without include ( ) White Spaces    (Self Created.)
int countlength(char str[]);
int main()
{   
    char name[100];

    fgets(name,100,stdin);
    printf("Length is %d\n",countlength(name));

}

int countlength(char str[]){
    int length = 0;
    for(int i=0; str[i]!='\0' ;i++)
    {
        length++;

        // ignore spaces
        if(str[i]==32)          // 32 is Ascii code of Space
        {
            length--;
        }
    }
    return length-1; //there is some problem with fgets it reads one extra character each time.
}