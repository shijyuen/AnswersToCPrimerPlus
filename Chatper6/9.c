#include <stdio.h>
double func(double a, double b);
int main(void){
	double a,b;
	
	printf("enter 1st floating-point:\n");
	
	for(;scanf("%lf", &a) == 1;){
		printf("enter 2nd floating-point:\n");
		scanf("%lf", &b);
		printf("%f\n",func(a,b));
		printf("enter 1st floating-point:\n");
	}
	return 0;
}
double func(double a, double b){
	double result;
	result = (a - b) / ( a * b);
	return result;
}
