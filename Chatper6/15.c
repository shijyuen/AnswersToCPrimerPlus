#include <stdio.h>
#include <string.h>
int main(void){
	char a[255];
	int count = 0;
	
	scanf("%s", a);//���ַ�����ʽ����һ������
	 
	count =  strlen(a);//�������鳤�� 
	while(count > 0){
		printf("%c", a[count - 1]);
		count--;
	}
	
	return 0;
} 
