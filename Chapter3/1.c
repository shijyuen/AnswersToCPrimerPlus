#include <stdio.h>
#include <limits.h>//参考第四章P110，不用自己打数字 
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
//整型溢出,就是一个整型太大了，书P68的toobig.c就是整型溢出的例子。
//为啥到最大值之后重新开始了？ 想象一个圆，转弯一圈后回到初始位置，差不多这意思。

//浮点上溢，就是浮点数（指数）太大了，直接表示成inf，无穷大。
//特殊的浮点数：NaN 即 Not a Number，不存在；INF，无穷大。 
//浮点下溢，就是浮点数不能被精确表示(通常在除法出现)，产生低于正常的(subnormal)浮点值;除数太大时损失尾数部分的全部精度，结果为0 
//浮点数精度问题看指北 
