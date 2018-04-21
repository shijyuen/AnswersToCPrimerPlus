#include <stdio.h>
int main(void){
	char first_name[40];//声明数组，有40个元素 
	char last_name[40];
	
	printf("enter your first name:\n");
	scanf("%s", first_name);
	//这里不用&地址获取符号了，之后会学到 
	printf("enter your last name:\n");
	scanf("%s", last_name);
	printf("%s,%s", last_name, first_name);
	
	return 0;
}
