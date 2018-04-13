#include <stdio.h> 

int main(void){
    const double cm_per_inch = 2.54;//ÉùÃ÷³£Êı 
    double inches;
    
	printf("enter inches:\n");
    scanf("%f", &inches);
    printf("%f inches = %f cm", inches, inches * cm_per_inch);
    
    return 0;
}
