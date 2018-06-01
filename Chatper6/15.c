#include <stdio.h>
#include <string.h>
int main(void){
	char a[255];
	int count = 0;
	
	scanf("%s", a);//以字符串形式读入一行内容
	 
	count =  strlen(a);//计算数组长度 
	while(count > 0){
		printf("%c", a[count - 1]);
		count--;
	}
	
	return 0;
} 
