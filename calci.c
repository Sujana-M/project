#include<stdio.h>
void main()
{
	int divi, divisor, quo, rem;
	printf("Enter dividend:");
	scanf("%d", &divi);

	printf("enter divisor" );
	scanf("%d", &divisor);

	quo=divi/divisor;
	rem=divi%divisor;

	printf("Quotient is %d\n" , quo);
	printf("/nremainder is %d\n" , rem);
}
