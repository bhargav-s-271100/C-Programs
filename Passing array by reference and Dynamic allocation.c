#include<stdio.h>
#include<conio.h>
void read(int* list,int size)
{
	int i;
	printf("\nEnter the items to be purchased : \n");
	for(i=0;i<size;i++)
	  scanf("%d",&list[i]);
}
void display(int* list,int size)
{
 	int i;
	printf("\nThe items are : ");
	for(i=0;i<size;i++)
	    printf("%d ",list[i]);	
}
int main()
{
	int* list,size;
	list=(int*)malloc(size*(sizeof(int)));
	printf("\nEnter the number of items : ");
	scanf("%d",&size);
	read(list,size);
	display(list,size);
	return 0;
}
