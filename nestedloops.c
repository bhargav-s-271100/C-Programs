#include<stdio.h>
#include<conio.h>
int main()
{
     int i,j,a[]={5,4,3,2,1};
     for(i=1;i<=5;i++)
     { 
       printf("\n");
       for(j=5;j>=i;j--)
        { 
          printf("P%d ",a[j-1]);
        }
     }
    getch();
    return 0;
}                                      
