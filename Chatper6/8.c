#include <stdio.h>
int main(void){
	double a,b;
	
	printf("enter 1st floating-point:\n");
	
	for(;scanf("%lf", &a) == 1;){
		printf("enter 2nd floating-point:\n");
		scanf("%lf", &b);
		printf("%f\n", (a - b) / (a * b));
		printf("enter 1st floating-point:\n");
	}
	return 0;
}
