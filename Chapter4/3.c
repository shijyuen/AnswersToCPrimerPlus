#include <stdio.h>
int main(void){
	double num;
	
	printf("enter a floating-point num:\n");
	scanf("%lf", &num);
	printf("a. The input is %.1f or %.1e\n", num, num);
	printf("b. The input is %.3f or %.3e\n", num, num);
	
	return 0;
}
