#include <stdio.h>
int main(void){
	double num[8];
	double sum[8];
	int count = 1;
	
	printf("enter the 1st array:\n");
	for(; count <= 8; count++){
		scanf("%lf", &num[count]);
	}
	printf("the 2nd array is:\n")
	for(count = 1; count <= 8; count++){
		sum[count] = sum[count - 1] + num[count];
		printf("%.2f\n", sum[count]);
	}
	
	return 0;
}
