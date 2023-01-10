#include <stdio.h>
#include <string.h>
int main()
{
   int custid, unit;
   float charge, surchg, grsamt,netamt;
   char consumername[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",&consumername);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit <200 )
	charge = 1.20;
   else	if (unit>=200 && unit<400)
		charge = 1.50;
	else if (unit>=400 && unit<600)
			charge = 1.80;
		else
			charge = 2.00;
   grsamt = unit*charge;
   if (grsamt>400)
	surchg = grsamt*15/100.0;
   netamt = grsamt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer ID No.                       :%d\n",custid);
   printf("Customer Name                       :%s\n",consumername);
   printf("Unit Consumed                       :%d\n",unit);
   printf("Amount Charges @Rs. %.2f  per unit :%.2f\n",charge,grsamt);
   printf("Surchage Amount                     :%.2f\n",surchg);
   printf("Net Amount To Be Paid By the Customer     :%.2f\n",netamt);
   return 0;

}
