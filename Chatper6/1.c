#include <stdio.h>
int main(void){
	int letters[26];//����26��Ԫ�ص����� 
	int count;
	const int num = 26;//��ĸ����26�� 
	
	for(count = 0;count < num;count++){
		letters[count] = 'a' + count;//����ĸ������������Ӧλ�� 
		printf("%c", letters[count]);//��ӡ�����λ�õ���ĸ 
	}
	
	return 0;
} 
