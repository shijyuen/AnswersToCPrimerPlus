#include <stdio.h>
int main(void){
	int letters[26];//声明26个元素的数组 
	int count;
	const int num = 26;//字母常数26个 
	
	for(count = 0;count < num;count++){
		letters[count] = 'a' + count;//将字母储存在数组相应位置 
		printf("%c", letters[count]);//打印数组各位置的字母 
	}
	
	return 0;
} 
