#include<stdio.h>
//                                                                      29/6/23
int main()
{   
    int num,guess = 6;
    int i;

    printf("This is a Guessing Game.\n");
    printf("You have to choose a number random from 0 to 20.\n\n");

    for(i=5;i>=1;i--)
    {
        printf("You have %d tries left\n",i);
        printf("Enter a guess: ");
        scanf("%d",&num);

        printf("\n");

        if(num == guess){
            printf("Congratulations :) You guess the number i.e. %d\n",num);
            break;
        }
        if(num > guess)
        {
            printf("Sorry %d is wrong answer. My number is less than that.\n",num);
        }
        
        if(num < guess){
            printf("Sorry %d is wrong answer. My number is greater than that.\n",num);
        }
    }
    if(i == 0)
    {
        printf("Sorry you fail to guess it try again.");
    }
    return 0;
}

