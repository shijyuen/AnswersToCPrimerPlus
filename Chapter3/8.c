#include <stdio.h> 

int main(void){
    float cups, pint, ounces, tablespoons, teaspoons;
    
	printf("how many cups\n");
    scanf("%f", &cups);
    printf("%f cups is %f pint, %f ounces, %f tablespoons, %f teaspoons", cups, cups * 0.5, cups * 8, cups *8*2, cups *8*2*3);
    
    return 0;
}
