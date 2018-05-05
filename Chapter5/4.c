#include <stdio.h>
int main(void){
	double height;
	const double cm_per_inch = 2.54;
	const double cm_per_feet = 30.38;
	
	while(height > 0){
		printf("Enter a height in centimeters:");
		scanf("%lf", &height);
		
		int feet = (int)(height / cm_per_feet);
		double inch = (height - cm_per_feet * feet) / cm_per_inch;
		
		printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inch);
		
	}
	printf("bye"); 
	return 0;
}
