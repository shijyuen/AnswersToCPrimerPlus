#include <stdio.h>
int main(void){
	int lower_limits;
	int upper_limits;
	int num;
	
	printf("enter the lower limits:\n");
	scanf("%d", &lower_limits);
	printf("enter the upper limits:\n");
	scanf("%d", &upper_limits);
	
	for(num = lower_limits; num <= upper_limits; num++){
		printf("%d\t", num);
		printf("%d\t", num * num);
		printf("%d\t\n", num * num * num);
	}
	return 0;
}
