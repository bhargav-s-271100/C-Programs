/* C PROGRAM TO DISPLAY THE TARRIF PLANS AND CHARGES
LEVIED ON CONSUMERS BY ELECTRICITY BOARD FOR THEIR
REGULAR DOMESTIC CONSUMPTION */

#include<stdio.h>
#include<conio.h>
#define l1  200 
#define r1  0.8
#define l2  300
#define r2  0.9
#define r3  1
#define meter_charge  100
int main()
{
 int n,rem,p;
 float c1,c2,c3,total_charge,excess_charge;
 char name[20];
 printf("enter the name of the user:\n");
 gets(name);
 printf("enter the number of units consumed: ");
 scanf("%d",&n);
 p=n;
 while(p!=0)
 {
  rem=p%10;
  if(rem<48 || rem>57)
   {
     printf("enter only integers for number of units consumed\n");
     exit(0);
   }
   p=p/10;
 }
 printf("\n--------------------------------------------\n");
 printf("\t \t \t ELECTRICITY BILL \t \t \t\n");
 printf("\n--------------------------------------------\n");
 printf("name of the consumer:");
 puts(name);
 printf("number of units consumed : %d",n);
 printf("\n ALL BILL AMOUNTS AND CHARGES ARE IN RUPEES\n");
 printf("meter charge for all consumers is 100rupees irrespective of consumption\n");
 printf("----------------------------------------------\n");
 printf("TARRIF RATES ARE AS FOLLOWS :\n");
 printf("----------------------------------------------\n");
printf("for consumption upto 200 units amount per unit is 0.8rupees\n ");
 printf("for consumption beyond 200 units and below 300 units amount per unit is 0.9rupees\n ");
 printf("for consumption beyond 300 units amount per unit is 1rupees\n");
 printf("if total charge on the overall consumption is greater than 400rupees an excess charge of 0.15% of total charge is levied on the bill amount\n");
printf("\n----------------------------------------------\n");
printf("\n BILL  AMOUNT \n");
printf("\n----------------------------------------------\n");
if(n<=l1)
  {
   c1=n*r1;
   printf("charge for consumption upto first stage = %f\n",c1);
   total_charge=meter_charge+c1;
   printf("excess charge= 0.0\n");
   printf("BILL AMOUNT = %f\n",total_charge);
  }
 if(n>l1 && n<=l2)
  {
   c1=l1*r1;
   printf("charge for consumption upto first stage = %f\n",c1);
   c2=(n-l1)*r2;
   printf("charge for consumption from first stage upto second stage = %f\n",c2);
   total_charge=meter_charge+c1+c2;
   printf("excess charge=0.0");
   printf("BILL AMOUNT = %f\n",total_charge);
  }
 if(n>l2)
  {
   c1=l1*r1;
   printf("charge consumption upto first stage = %f\n",c1);
   c2=l2*r2;
   printf("charge consumption from first stage upto second stage = %f\n",c2);
   c3=(n-l1-l2)*r3;
   printf("charge consumption from second stage upto third stage = %f\n",c3);
   total_charge=meter_charge+c1+c2+c3;
   if(total_charge>400)
    {
     excess_charge=(0.15*total_charge);
     printf("excess charge levied for consumption higher than 400rupees = %f\n",excess_charge);
     printf("BILL AMOUNT = %f\n",total_charge+excess_charge);
    }
    else
     printf("BILL AMOUNT = %f \n",total_charge);
  }
printf("\n-----------------------------------------------\n");
 getch();
 return 0;
}
