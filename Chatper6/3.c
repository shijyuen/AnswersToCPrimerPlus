#include <stdio.h>
int main(void){
	char ch;
	int row;
	const int ROWS = 6;//声明行数常数 
	
	for(row =1; row <= ROWS; row++){//外循环控制行数 
		for(ch = 'F';ch > ('F' - row); ch--){//内循环控制打印内容 
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
