#include <stdio.h>
int main(void){
	char first_name[40];//�������飬��40��Ԫ�� 
	char last_name[40];
	
	printf("enter your first name:\n");
	scanf("%s", first_name);
	//���ﲻ��&��ַ��ȡ�����ˣ�֮���ѧ�� 
	printf("enter your last name:\n");
	scanf("%s", last_name);
	printf("%s,%s", last_name, first_name);
	
	return 0;
}
