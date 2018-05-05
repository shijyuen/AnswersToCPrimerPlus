#include <stdio.h>
int main(void){
	int days = 1;
	const days_per_week = 7; 
	
	while(days > 0){
		printf("enter days:\n");
		scanf("%d", &days);
		printf("%d days are %d weeks, %d days.\n", days, days / days_per_week, days % days_per_week);
	}
	return 0;
}
