#include <stdio.h>
int main(void){
	int upper, lower, sum, num;
	
	printf("Enter lower and upper integer limits:\n");
	scanf("%d %d", &lower, &upper);
	num = lower;
	while(upper > lower){
		for(num = lower, sum = 0; num <= upper; num++){
			sum += num * num;
		}
		printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
		printf("Enter next lower and upper integer limits:\n");
		scanf("%d %d", &lower, &upper);
	}
	printf("Done\n");
	
	return 0;
}
