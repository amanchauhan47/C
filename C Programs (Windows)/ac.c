#include<stdio.h>
//            Taking numbers input from users until user enters an odd number.
//            Taking numbers input from users until user enters an multiple of 7
int main()
{
    int a,i;

    
    

    //for(;1;) infinite loop
    for(;1;)
    {   
        printf("Enter the number:");
        scanf("%d",&a);
        
        if(a%7==0)
        {
            break;
        }
        
    }
    printf("Code With A-MAN!\n Thank you :)");
    return 0;

    /*for(;1;)
    {   
        printf("Enter the number:");
        scanf("%d",&a);
        
        if(a%2!=0)
        {
            break;
        }
        
    }
    printf("Code With A-MAN!\n Thank you :)");
    return 0;*/
}