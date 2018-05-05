#include <stdio.h>
int main(void){
	int count = 0, sum = 0;
	
	printf("enter a num:\n");
	scanf("%d", &count);
	while(count > 0){		
		sum = sum + count;
		count--;
	} 
	printf("the sum is %d\n", sum);
	return 0;
}
