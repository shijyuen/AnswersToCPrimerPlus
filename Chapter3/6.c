#include <stdio.h>
int main(void){
	double quarts;
	const double num_of_mole = 3.0e-23;//声明常数 
	const double NUM_OF_WATER_MOLECULE_PER_QUART = 950 / num_of_mole;//每quart摩尔数
	
	printf("enter quarts:\n");
	scanf("%lf", &quarts);
	
	double result = quarts * NUM_OF_WATER_MOLECULE_PER_QUART ;
	printf("the num of water molecule is %e", result);
	
	return 0;
}
	
