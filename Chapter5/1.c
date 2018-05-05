#include <stdio.h>
#define mins_per_hour 60
int main(void){
	int min = 1;
	
	while(min > 0){
		printf("enter a time:\n");
		scanf("%d", &min);
		printf("%d mins is %d hour %d min\n", min, min / mins_per_hour, min % mins_per_hour);
	}
	
	return 0;
} 
