#include<stdio.h>
int main()
{
    int cal,mon;
    int loop,y;

    printf("Enter the month: ");
    scanf("%d",&mon);
    printf("Enter the year: ");
    scanf("%d",&y);
    

    if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){

        loop= 31;
    }
    else if(mon==2)

    {
        if(y%4==0)
        {
            loop=28;
        }
        else{
            loop=29;
        }
    }

    else{
        loop=30;
    }
    printf("\nSun\tMon\tTue\tWed\tThur\tFri\tSat\n");
    for(int i=1;i<=loop;i++)
    {
        if(i<10)
        {
            printf(" ");
        }

        printf("%d\t",i);
 
        if(i%7==0)
        {
            printf("\n");
        }
    }
    return 0;
}