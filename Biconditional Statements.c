#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    char gender;
    printf("enter  the age and gender\n");
    scanf("%d %c",&age,&gender);
    if(((gender=='g')&&(age>=18))||((gender=='m')&&(age>=21)))
     printf("eligible to vote\n");
    else
     printf("not eligible to vote\n");
    getch();
    return 0;
}      
