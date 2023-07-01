#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[100];
    int roll;
    float cgpa;
} stu;

int main()
{
    stu s1;
    stu *ptr = &s1;
    s1.roll = 9;
    s1.cgpa = 8.9;
    strcpy(s1.name,"Shivani");

    printf("%s\n",(*ptr).name);
    printf("%d\n",ptr->roll);
    printf("%.2f\n",ptr->cgpa);
 
    return 0;
}