#include <stdio.h>
int main(void){
	int row, i;
	const int ROWS = 5;
	
	for(row = 1;row <= ROWS;row++){//��ѭ���������� 
		for(i = 1;i <= row;i++){//��ѭ�����Ƹ��д�ӡ���� 
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
