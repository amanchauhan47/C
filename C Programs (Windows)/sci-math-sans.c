#include<stdio.h>
int percent(int science, int math, int hindi);

int main()
{
    int science, math, hindi;

    printf("Enter your Science, Maths and Hindi marks below: ");
    scanf("%d%d%d", &science, &math, &hindi);

    printf("%d%%",percent(science,math,hindi));
    return 0;
}

int percent(int science, int math, int hindi){

    return (science+math+hindi)/3;
}