#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[20];
    char sen[20];
    
    
    scanf("%c",&ch);
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
  
    
    return 0;
}