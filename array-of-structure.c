#include<stdio.h>
#include<string.h>
struct student {
    int roll;
    char name[100];
    float cgpa;
};
int main()
{
    struct student ece[100];
    ece[0].cgpa = 7.9;
    ece[0].roll = 4;
    strcpy(ece[0].name,"Aman");

    printf("%s\n",ece[0].name);
    printf("%d\n",ece[0].roll);
    printf("%f\n",ece[0].cgpa);

    return 0;
}

