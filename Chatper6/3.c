#include <stdio.h>
int main(void){
	char ch;
	int row;
	const int ROWS = 6;//������������ 
	
	for(row =1; row <= ROWS; row++){//��ѭ���������� 
		for(ch = 'F';ch > ('F' - row); ch--){//��ѭ�����ƴ�ӡ���� 
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
