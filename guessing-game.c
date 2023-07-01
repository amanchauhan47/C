#include<stdio.h>
int main()
{
    int guess=2,num;
    int i;

    printf("This is a Guessing Game.\n");
    printf("You have to choose a number random from 0 to 20.\n\n");

    for(i=5;i>=1;i--)
    {
        printf("You have %d tries left\n",i);
        printf("Enter a guess: ");
        scanf("%d",&num);
        if(num==guess)
        {
            break;
        }
        else if(num>guess)
        {
            printf("Sorry, %d is wrong answer. My number is less than that.\n\n",num);
        }
        else if(num<guess)
        {
            printf("Sorry, %d is wrong answer. My number is greater than that.\n\n",num);
        }
    }
    if(num==guess)
    {
        printf("\nCongratulations. You guess it!\n");
    }
    else
    {
        printf("Sorry you are fail to guessing the number. Try again next time.");
    }

    return 0;
}