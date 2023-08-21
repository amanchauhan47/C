#include<stdio.h>
#include<string.h>
typedef struct student{
    char *name;
    int roll;
} stu;
int main()
{
  stu s1[0] = {"Aman",5};

    s1[0].name = "Shivani";
    printf("%s\n",s1[0].name);
    printf("%d\n",s1[0].roll);

    return 0;
}