#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("student.txt","w");
    char name[100];
    int roll;
    float cgpa;

    printf("Enter the name: ");
    scanf("%s",name);

    printf("Enter the roll: ");
    scanf("%d",&roll);

    printf("Enter the cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr,"Student name : %s\n",name);
    fprintf(fptr,"Student roll : %d\n",roll);
    fprintf(fptr,"Student Cgpa : %.2f\n",cgpa);

    fclose(fptr);
    return 0;
}