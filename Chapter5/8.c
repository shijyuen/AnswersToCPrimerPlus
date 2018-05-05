#include <stdio.h>
int main(void){
	int second_operand = 0, first_operand = 0;
	
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &second_operand);
	printf("Now enter the first operand:");
	scanf("%d", &first_operand);
	
	while(first_operand > 0){
		//俩百分号转义！！！ 
		printf("%d %% %d is %d\n", first_operand, second_operand, (first_operand % second_operand));
		printf("Enter next num for first operand(<=0 to quit):");
		scanf("%d", &first_operand);
	}
	printf("Done");
	return 0;
}
