#include<stdio.h>
#include<math.h>
int main()
{
	int PRINCIPLE , TIME ;
	float CI,SI,SIAMOUNT,CIAMOUNT,INTEREST;
	printf("ENTRE PRINCIPLE MONEY :");
	scanf("%d",&PRINCIPLE);
	printf("ENTRE TIME IN YEARS :");
	scanf("%d",&TIME);
	printf("ENTRE INTEREST :");
	scanf("%f",&INTEREST);
    SI= (PRINCIPLE*INTEREST*TIME)/100;
	SIAMOUNT= ((PRINCIPLE*INTEREST*TIME)/100)+PRINCIPLE;
	printf("\nSIMPLE INEREST IS :%f",SI);
	printf("\nSIMPLE INEREST  AMOUNT IS :%f",SIAMOUNT);
    CI = PRINCIPLE * (pow(1+INTEREST/100, TIME) - 1);
	CIAMOUNT = PRINCIPLE+CI;
	printf("\nCOMPUND INEREST IS :%f",CI);
	printf("\nCOMPOUND INEREST  AMOUNT IS :%f",CIAMOUNT);
}