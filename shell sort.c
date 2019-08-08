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
     int gap=n,j=1,i,temp;
     while(j==1||gap>1)
     {
                       j=0;
                       gap=(gap+1)/2;
                       for(i=0;i<n-gap;i++)
                       {
                                           if(a[gap+i]>a[i])
                                           {
                                                            temp=a[i];
                                                            a[i]=a[gap+i];
                                                            a[gap+i]=temp;
                                           }
                       }
     }
}
     
