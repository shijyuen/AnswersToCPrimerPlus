#include <stdio.h>
int main(void)
{
	double daphne, deirdre;
	int years = 1;
	const double money = 100.;
	daphne = money;
	deirdre = money;
	
	printf("      Daphne  Deirdre\n");

	while (deirdre <= daphne)
	{
		daphne += money * 0.10;
		deirdre *= 1.05;
		printf("%2d : $%-7.2f $%-7.2f\n", years, daphne, deirdre);
		years++;
	}
	printf("answer is [%d] years\n", years-1);
	printf("Daphne will have $%.2f, and Deirdre will have $%.2f\n", daphne, deirdre);
}
