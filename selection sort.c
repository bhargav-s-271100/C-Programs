#include<stdio.h>
#include<conio.h>
void sort(int a[],int n);
int small(int a[],int n,int i);
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
     int i,j,pos,temp;
     for(i=0;i<n;i++)
     {
                pos=small(a,n,i);
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
     }
}
int small(int a[],int n,int i)
{
    int p,small,j;
    p=i,small=a[i];
    for(j=i;j<n;j++)
    {
                    if(small>a[j])
                     {
                      small=a[j];
                      p=j;
                     }
    }
     return p;
}
         
                          
