#include <stdio.h>
int main(void){
	char ch = 'A';
	int row, num;
	const int ROWS = 6;//声明行数常数 
	
	for(row = 0; row < ROWS; row++){//外循环控制行数 
		for(num = 0; num <= row; num++){//内循环控制打印内容 
			printf("%c", ch++);
		}
		printf("\n");
	}
	return 0;
}
