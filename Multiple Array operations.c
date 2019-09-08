#include<stdio.h>
#include<conio.h>
void Read(int plhari[],int size)
{
	int i;
	printf("Enter the price of the %d items : \n",size);
	for(i=0;i<size;i++)
	   scanf("%d",&plhari[i]);
}
void Display(int plhari[],int size)
{
	int i;
	printf("The price of the %d items : \n",size);
	for(i=0;i<size;i++)
	    printf("%d ",plhari[i]);
}
void update(int plhari[],int size)
{
	int i;
	printf("\nThe updated prices are : ");
	for(i=0;i<size;i++)
	   printf("%d ",plhari[i]*2);
}
int addall(int plhari[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	    sum+=plhari[i];
	return sum;
}
int updatepos(int a[],int position,int value)
{
	a[position]=value;
	return a[position];
}
void search(int a[],int size,int value)
{
	int i,beg=0,end=size-1,mid,found=0;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==value)
		{
			printf("\nValue found at position %d\n",mid+1);
			found=1;
			break;
        }
        else if(a[mid]>value)
           end=mid-1;
        else if(a[mid]<value)
		   beg=mid+1;      
	}
	if (found==0)
	   printf("\nValue not found \n");
}
void count(int a[],int size,int value)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(a[i]<value)
		   count++;
	}
	printf("\nNumber of elements less than %d is %d",value,count);
}
void swap(int a[],int m,int n)
{
	a[m]=a[m]+a[n];
	a[n]=a[m]-a[n];
	a[m]=a[m]-a[n];
	printf("\nThe swapped elements are %d and %d",a[m],a[n]);
}
void copy(int a[],int size,int b[])
{
	int i;
	for(i=0;i<size;i++)
	   b[i]=a[i];
	printf("\nThe array elements of array a copied to array b is as follows : \n");
	for(i=0;i<size;i++)
	  printf("%d ",b[i]);   
}
void extract(int a[],int position1,int position2)
{
	int i;
	printf("\nThe elements between %d and %d are : \n",position1,position2);
	for(i=position1;i<position2;i++)
	  printf("%d ",a[i]);
}
int main()
{
	int plhari[10],size=10,b[10];
	Read(plhari,size);
	Display(plhari,size);
	update(plhari,size);
	printf("\nThe total price is : %d\n",addall(plhari,size));
	int pos,val;
	printf("Enter the position and value to be updated : \n");
	scanf("%d%d",&pos,&val);
	printf("The element at position %d updated is : %d \n",pos,updatepos(plhari,pos,val));
	int value;
	printf("Enter the value to be searched for : \n");
	scanf("%d",&value);
	search(plhari,size,value);
	int v;
	printf("Enter the value below which the number of elements  should be counted : ");
	scanf("%d",&v);
	count(plhari,size,v);
	swap(plhari,3,5);
	copy(plhari,size,b);
	extract(plhari,5,8);
	return 0;
}
