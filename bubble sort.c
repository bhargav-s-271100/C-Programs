#include<stdio.h>
#include<conio.h>
void sort(int a[],int n);
int main()
{
                 int a[20],i,n;
                 printf("enter the number of elements\n");
                 scanf("%d",&n);
                 printf("enter the array\n");
                 for(i=0;i<n;i++)
                  scanf("%d",&a[i]);
                 sort(a,n);
                 printf("the sorted array is\n");
                 for(i=0;i<n;i++)
                  printf("%d",a[i]);
                 getch();
                 return 0;
}
void sort(int a[20],int n)
{
     int i,j,temp;
     for(i=0;i<n;i++)
     {
                     for(j=0;j<n-i;j++)
                      {
                                       if(a[j]>a[j+1])
                                       {
                                                      temp=a[j];
                                                      a[j]=a[j+1];
                                                      a[j+1]=temp;
                                       }
                      }
     }
}     
                                                      
       
