#include<stdio.h>

typedef struct address{
    int Hno;
    int block;
    char city[100];
    char state[100];
} add;

void printaddress(struct address s1);


int main()
{   add s1[5];
    printf("Enter the 1st person Address:\n");
    scanf("%d%d%s%s",&s1[0].Hno,&s1[0].block,s1[0].city,s1[0].state);

    printf("Enter the 2st person Address:\n");
    scanf("%d%d%s%s",&s1[1].Hno,&s1[1].block,s1[1].city,s1[1].state);

    printaddress(s1[0]);
    printaddress(s1[1]);

    return 0;

}
void printaddress(struct address s1){
    printf("\nHouse No. is %d\n",s1.Hno);
    printf("Block No. is %d\n",s1.block);
    printf("City is %s\n",s1.city);
    printf("State is %s\n",s1.state);
}