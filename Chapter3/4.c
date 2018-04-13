#include <stdio.h>
//分别使用%f%e%a 表示浮点数 
int main(void){
	float num;
	
	printf("Enter a floating-point value:");
	scanf("%f", &num);
	printf("fixed-point notation: %f\n", num);
	printf("exponential notation: %e\n", num);
	printf("p notation: %a\n", num);
	
	return 0;
}
