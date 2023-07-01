#include<stdio.h>
struct student{
    char name[100];
    int roll;
};
void printinfo(struct student s1);
int main()
{
    struct student sem1[20];
    struct student sem2[12];

    printf("Enter the name and roll no. of First sem student: \n");
    scanf("%s %d",sem1[0].name, &sem1[0].roll);

    printf("Enter the details of Second sem student: \n");
    scanf("%s %d",sem2[0].name, &sem2[0].roll);

    printinfo(sem1[0]);
    printinfo(sem2[0]);

    return 0;
}
void printinfo(struct student s1){
    printf("Name is %s, Roll no. is %d\n",s1.name, s1.roll);
}