#include<stdio.h>
#include<string.h>
//                               First Structure Program
struct student{
    char name[100]; // or char *name;
    int roll;
    float cgpa;
};
int main()
{
    struct student s1;
    s1.roll = 3;
    s1.cgpa = 7.3;
    strcpy(s1.name,"Aman");

    struct student s2;
    s2.roll = 4;
    s2.cgpa = 8.5;
    strcpy(s2.name,"Shivani");

    struct student s3;
    s3.roll = 2;
    s3.cgpa = 6.9;
    strcpy(s3.name,"Abhishek");

    printf("Name = %s\n",s1.name);
    printf("Roll no. = %d\n",s1.roll);
    printf("CGPA = %.2f\n\n",s1.cgpa);

    printf("Name = %s\n",s2.name);
    printf("Roll no. = %d\n",s2.roll);
    printf("CGPA = %.2f\n\n",s2.cgpa);

    printf("Name = %s\n",s3.name);
    printf("Roll no. = %d\n",s3.roll);
    printf("CGPA = %.2f\n",s3.cgpa);

    return 0;
}






//puts("Hello World");     puts function also works like printf function in such case.