#include<stdio.h>
int main()
{
    int day;//  1=monday,2=tuesday,3=wednesday,baki ke liye=Other day

    printf("Enter Day:\t");
    scanf("%d",&day);

    switch (day)
    {
    case 1: printf("Monday");
        break;

    case 2: printf("Tuesday");
        break;

    case 3: printf("Wednesday");
        break;

    case 4: printf("Thursday");
        break;

    case 5: printf("Friday");
        break;

    case 6: printf("Saturday");
        break;

    case 7: printf("Sunday");
        break;
    
    default: printf("Not Valid Day.");
        break;
    }

    return 0;

}