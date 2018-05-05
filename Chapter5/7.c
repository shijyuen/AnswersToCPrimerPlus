#include <stdio.h>
void cube(double num);
int main(void){
	double num;
	
	printf("enter a double num:\n");
	scanf("%lf", &num);
	cube(num);
	
	return 0;
}
void cube(double num){
	printf("%e cubed is %e", num, num * num * num);
}
