#include<stdio.h>
#include<conio.h>
void Deposit(int* b,int a)
{
	*b+=a;
}
void Credit(int* b,int a)
{
	*b-=a;
}
void display(int* b)
{
	printf("\nCurrent Balance = Rs %d /- ",*b);
}
int main()
{
	int choice,amount,local_account=0;
	for(;;)
	{
		printf("Enter the Choice\n");
		printf("1: Deposit 2: Credit 3: Display the Balance  4: Exit \n");
		scanf("%d",&choice);
		switch(choice)
			{
				case 1: 
					printf("Enter the amount to be Deposit\n");
					scanf("%d",&amount);
					Deposit(&local_account,amount);
					display(&local_account);
					break;
				case 2: 
					printf("Enter the amount to be Credit\n");
					scanf("%d",&amount);
					Credit(&local_account,amount);
					display(&local_account);
					break;
				case 3:
					display(&local_account);
				default: 
				    exit(0);
			}
		}
	return 0;
}

