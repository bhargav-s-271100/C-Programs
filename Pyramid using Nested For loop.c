#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		   printf(" ");
		for(j=0;j<2*i+1;j++)
		   printf("*");
		for(j=0;j<n-i-1;j++)
		    printf(" "); 
		printf("\n");	     
	}
	return 0;
}
