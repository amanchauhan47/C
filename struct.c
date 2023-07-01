#include<stdio.h>
struct student {
    char name[100];
    int roll;
};
int main()
{
    struct student s1 = {"Aman",14};
    struct student *ptr;
    ptr = &s1;

    printf("%s\n",ptr->name);
    printf("%d\n",ptr->roll);
    return 0;

}