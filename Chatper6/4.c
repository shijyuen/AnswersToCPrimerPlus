#include <stdio.h>
int main(void){
	char ch = 'A';
	int row, num;
	const int ROWS = 6;//������������ 
	
	for(row = 0; row < ROWS; row++){//��ѭ���������� 
		for(num = 0; num <= row; num++){//��ѭ�����ƴ�ӡ���� 
			printf("%c", ch++);
		}
		printf("\n");
	}
	return 0;
}
