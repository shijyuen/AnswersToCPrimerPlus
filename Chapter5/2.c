#include <stdio.h>
int main(void){
	int num;
	
	printf("enter a num:\n");
	scanf("%d", &num);
	
	int end = num + 10;//声明结束的数字
	
	while(num < end){
		num++;
		printf("%d\n", num);
		//注意顺序！ 影响边界结果。而且这个不是唯一答案
	}
	return 0; 
}
