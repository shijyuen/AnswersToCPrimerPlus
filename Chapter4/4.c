#include <stdio.h>
int main(void){
	char name[40];
	float inch;
	
	printf("enter your name:\n", name);
	scanf("%s", name);
	printf("enter your height:\n", inch);
	scanf("%f", &inch);
	printf("%s, you are %.3f feet tall", name, inch / 12);
	
	return 0;
}
