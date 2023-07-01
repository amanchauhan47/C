#include<stdio.h>
//                      Another method of initialising Structure
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main()
{
    struct student s1 = {4,"Aman",7.9};
    /*
    Other method
    s1.roll = 7;
    s1.cgpa = 8.9;
    */

    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%.2f\n",s1.cgpa);

    return 0;
}