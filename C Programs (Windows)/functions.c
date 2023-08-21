#include<stdio.h>

void namaste();
void bonjour();
int main()
{
    char a;
    printf("Enter 'i' for Indian or 'f' for French:");
    scanf("%c",&a);

    // switch(a)
    // {
    //     case 'i' : namaste();
    //         break;

    //     case 'f' : bonjour();
    //         break;
        
        
    //     default : printf("Invalid Answer");
    // }
    namaste();

    return 0;
}

void namaste()
{
    printf("Namaste\n");
    bonjour(); //indirectly called function
}
void bonjour()
{
    printf("Bonjour\n");
    //namaste();    infinite loop chalega agr 2no function 1 dusre ko call krte rhenge to
    
}