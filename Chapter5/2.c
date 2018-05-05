#include <stdio.h>
int main(void){
	int num;
	
	printf("enter a num:\n");
	scanf("%d", &num);
	
	int end = num + 10;
	
	while(num < end){
		num++;
		printf("%d\n", num);
	}
	return 0; 
}
