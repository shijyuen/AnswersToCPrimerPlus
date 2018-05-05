#include <stdio.h>
void Temperatures(double F); 
int main(void){
	double F;
	
	printf("enter a fahrenheit temperature:\n");
	//scanf读入一个浮点，整型返回值 == 1
	while(scanf("%lf", &F) == 1){
		Temperatures(F); 
		printf("enter a fahrenheit temperature:(q to quit)\n");
	} 
	
	return 0;
}
void Temperatures(double F){
	const double Fahrenheit_num = 32.0;
    const double Kelvin_num = 273.16;
    const double Celsius = 5.0 / 9.0 * (F - Fahrenheit_num);
    const double Kelvin = F + Kelvin_num;

	printf("Celsius: %.2lf  Fahrenheit:%.2lf  Kelvin:%.2lf\n", Celsius, F, Kelvin);
}
