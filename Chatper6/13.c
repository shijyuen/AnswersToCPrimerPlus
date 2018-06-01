#include <stdio.h>
int main(void){
	int num[8];
	int power, count = 0;
	
	for(power = 1; count < 8; count++){
		power *= 2;
		num[count] = power;
		//printf("%d\n", num[count]);
	}
	count = 0;
	do{
		printf("%d\n", num[count]);
		count++;
	}while(count < 8);
	
	return 0;
}
