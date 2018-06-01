#include <stdio.h>
int main(void){
	int row, i;
	const int ROWS = 5;
	
	for(row = 1;row <= ROWS;row++){//外循环控制行数 
		for(i = 1;i <= row;i++){//内循环控制各行打印内容 
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
