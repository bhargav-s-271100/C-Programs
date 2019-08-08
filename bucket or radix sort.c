#include<stdio.h>
#include<conio.h>
void sort(int a[],int n);
int large(int a[20],int n)
{
    int l=a[0],i;
    for(i=1;i<n;i++)
    {
                    if(l<a[i])
                     l=a[i];
    }
    return l;
}
    
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
     int i,pass,nop=0,bucket_count[10],bucket[20][20],l,rem,div=1,j,k;
     l=large(a,n);
     while(l>0)
     { 
                   nop++;
                   l/=10;
     }
     for(pass=0;pass<nop;pass++)
     {
                                for(i=0;i<10;i++)
                                 bucket_count[i]=0;
                                for(i=0;i<n;i++)
                                {
                                                rem=(a[i]/div)%10;
                                                bucket[rem][bucket_count[rem]]=a[i];
                                                bucket_count[rem]++;
                                }
                                i=0;
                                for(j=0;j<10;j++)
                                {
                                                for(k=0;k<bucket_count[j];k++)
                                                 {
                                                                              a[i]=bucket[j][k];
                                                                              i++;
                                                 }
                                }
                                div*=10;
     }
}                
