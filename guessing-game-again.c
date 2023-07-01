#include<stdio.h>
int main()
{
    int n,guess=4;
    int count=0,i;

    printf("This is a Guessing Game.\n");
    printf("You have to choose a number random from 0 to 20.\n\n");

    for(i=5;i>=1;i--)
    {
        printf("You have %d tries left\n",i);
        printf("Enter the guess: ");
        scanf("%d",&n);
        if(n==guess)
        {   
            count++;
            break;
        }
        else if(n>guess)
        {
            printf("Sorry, %d is wrong answer. My number is less than that.\n\n",n);
        }
        else if(n<guess)
        {
            printf("Sorry, %d is wrong answer. My number is greater than that.\n\n",n);
        }

    }
        if(count==1)
        {
            printf("\nCongratulations You guess it. Thanks for Playing this Game.\nCreated by AMAN:)\n");
            if(i!=0)
            {
                printf("You also save your %d tries.",i);
            }
        }
        else if(count==0)
        {
            printf("Sorry , you are fail to guess the number. Try Again :(\n");
        }

        /* or we can do 

        if(n==guess)
        {
            printf("\nCongratulations You guess it. Thanks for Playing this Game.\nCreated by AMAN:)\n");
        }
        else
        {
            printf("Sorry , you are fail to guess the number. Try Again :(\n");
        }*/


    return 0;
}