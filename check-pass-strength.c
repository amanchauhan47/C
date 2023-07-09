#include<stdio.h>
int main()
{
    char pass[100];
    int sp,uc,n;

    printf("Enter your password: ");
    fgets(pass,100,stdin);

    for(int i=0; pass[i]!= '\0' ;i++)
    {
        if(pass[i] >= 48 && pass[i] <= 57){
            //for numbers
            n ++;
        }

        if(pass[i] >= 33 && pass[i] <= 47 || pass[i] >=58 && pass[i] <= 64){
            //for Special characters
            sp ++;
        }
        
        if(pass[i] >= 65 && pass[i] <= 90){
            //for upper case letters
            uc ++;
        }
    }

    if(n > 0 && uc > 0 && n > 0)
    {
        printf("Your Password is Strong.\n");
    }
    else if(n > 0 && uc > 0 || uc > 0 && sp > 0 || sp > 0 && n > 0)
    {
        printf("Your Password is Intermediate.\n");
    }
    else if(n > 0 || uc > 0 || sp > 0)
    {
        printf("Your Password is Weak.\n");
    }
    else{
        printf("Your password is too weak.\n");
    }

    //puts(pass);
    return 0;
}