#include<stdio.h>
//              Count vowels in a String (Self Created)
int vowels(char *string);
int main()
{
    char string[100];
    fgets(string,100,stdin);
    printf("vowels are %d\n",vowels(string));
    return 0;
}

int vowels(char *string){
    int vowel=0,i;
    for(i=0; string[i]!='\0' ;i++)
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u'){
            vowel++;
        }

    }
    return vowel;
}