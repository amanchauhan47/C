#include<stdio.h>
//                  Initialization of 2D Array
int main()
{
    //int marks[2][3] = {{69,96,71},{99,97,91}}; 

    int marks[2][3];
    marks[0][0] = 74;
    marks[0][1] = 54;
    marks[0][2] = 90;
    marks[1][0] = 86;
    marks[1][1] = 91;
    marks[1][2] = 92;
    
    //marks[2][] = 2 array banange memory me
    //marks[][3] = 3 size ke

    printf("%d\n",marks[0][0]);
    printf("%d\n",marks[0][1]);
    printf("%d\n",marks[0][2]);
    printf("%d\n",marks[1][0]);
    printf("%d\n",marks[1][1]);
    printf("%d\n",marks[1][2]);
    return 0;
}