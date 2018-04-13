#include <stdio.h>
int main(void){
	int age;
	const float sec_per_year = 3.156e7;//ÉùÃ÷³£Êı 
	
	printf("enter your age:\n");
	scanf("%d", &age);
	printf("equivalent num of sec is: %f", age * sec_per_year);
	
	return 0;
}
