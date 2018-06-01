#include <stdio.h>
int main(void){
	double money_left = 100;
	int cnt = 0;
	
	while (money_left > 0){
		money_left = money_left * 1.08 - 10;
		printf("%f\n", money_left);
		cnt++;
	}
	printf("%d years later\n", cnt);
	
	return 0;
}
