#include<stdio.h>
typedef struct ComputerEngineeringStudent{//  structure name;
    char name[100];
    int roll;
    float cgpa;
} coe;   //alias name;
int main()
{   
    //struct ComputerEngineeringStudent s1 = {"Aman",3,8.4};// instead of this

    coe s1 = {"Abhishek",4,8.2};    //we can use alias 

    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%.2f\n",s1.cgpa);

    return 0;
}