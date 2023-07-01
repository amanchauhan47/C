#include<stdio.h>
struct student{
    int roll;
};
int main()
{
    struct student s1[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1[i].roll);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d\t",s1[i].roll);
    }
    return 0;

}