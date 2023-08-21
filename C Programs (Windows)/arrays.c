#include<stdio.h>//              Addition of Two Arrays (Self Created)
int main()
{
    int a, b, i, array[50],second[50], j,result[40];

    for(i=0;i<5;i++)
    {
      scanf("%d",&array[i]);
    }

    printf("\n");

    for(j=0;j<5;j++)
    {
      scanf("%d",&second[j]);
    }
    
   j=i=0;
   //i=0;
  
    for(a=0;a<5;a++)
    {
    //result[a]=array[i]+second[j];
    //  printf("\n%d",array[i]+array[j]);
    printf("\n%d",array[i]+second[j]);
     i++;
     j++;

    }

    // i=4;
    // printf("\n%d",array[i]);
    // printf("%d",j);
 
  

    return 0;    
}