#include <stdio.h>
#include <float.h>
int main(){
	double num1 = 1.0/3.0;
	float num2 = 1.0/3.0;
	
	printf("%.4f\n%.12f\n%.16f\n", num1, num1, num1);
	printf("%.4f\n%.12f\n%.16f\n", num2, num2, num2);
	
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	
	return 0;
}
