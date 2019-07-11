#include<stdio.h>
void main()
{
	int dividend, divisor, quo, rem;
	printf("Enter dividend:");
	scanf("%d", &dividend);

	printf("enter divisor" );
	scanf("%d", &divisor);

	quo=dividend/divisor;
	rem=dividend%divisor;

	printf("Quotient is %d\n" , quo);
	printf("/nremainder is %d\n" , rem);
}
