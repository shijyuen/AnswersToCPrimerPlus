#include <stdio.h>
#include <limits.h>//�ο�������P110�������Լ������� 
#include <float.h>

int main(void)
{
	int int_overflow;
	int MAX_INTEGER = INT_MAX;
	float flt_overflow, flt_underflow;
	float MIN_FLOAT = FLT_MIN;
	float MAX_FLOAT = FLT_MAX;
	
	int_overflow = INT_MAX + 1;
	flt_overflow = FLT_MAX * 2.;
	flt_underflow = FLT_MIN / 2.;
	

	printf("Max integer: %d \nMax integer + 1: %d\n", INT_MAX, int_overflow);
	printf("Max float: %f \nMax float * 2: %f\n", FLT_MAX, flt_overflow);
	printf("Min float: %f \nMin float / 2: %f\n", FLT_MIN, flt_underflow);

	return 0;
}
//�������,����һ������̫���ˣ���P68��toobig.c����������������ӡ�
//Ϊɶ�����ֵ֮�����¿�ʼ�ˣ� ����һ��Բ��ת��һȦ��ص���ʼλ�ã��������˼��

//�������磬���Ǹ�������ָ����̫���ˣ�ֱ�ӱ�ʾ��inf�������
//����ĸ�������NaN �� Not a Number�������ڣ�INF������� 
//�������磬���Ǹ��������ܱ���ȷ��ʾ(ͨ���ڳ�������)����������������(subnormal)����ֵ;����̫��ʱ��ʧβ�����ֵ�ȫ�����ȣ����Ϊ0 
//�������������⿴ָ�� 
