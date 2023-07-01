#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void printinfo(struct student s1);

int main()
{
    struct student s1 = {"Aman",3,9.2};
    /*
    struct student *ptr;
    ptr = &s1;
    printf("%s\n",(*ptr).name);

    //same thing using arrow operator
    printf("%s\n",ptr->name);
    */
    printf("%d\n",s1.roll);

    printinfo(s1);
    return 0;
}
void printinfo(struct student s1){
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    s1.roll = 4;
}