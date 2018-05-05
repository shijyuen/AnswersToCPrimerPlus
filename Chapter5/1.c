#include <stdio.h>
#define mins_per_hour 60
int main(void){
	int min = 1;//初始化一个变量，大于0就行
	
	while(min > 0){
		printf("enter a time:\n");
		scanf("%d", &min);
		printf("%d mins is %d hour %d min\n", min, min / mins_per_hour, min % mins_per_hour);
		//两种除法自己好好体会
	}
	
	return 0;
} 
