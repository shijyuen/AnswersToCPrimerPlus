#include <stdio.h>
int main(void){
	int days = 1;
	const days_per_week = 7; 
	
	while(days > 0){
		printf("enter days:\n");
		scanf("%d", &days);
		printf("%d days are %d weeks, %d days.\n", days, days / days_per_week, days % days_per_week);
	}
	return 0;
}

//下面这个改了下条件， 输入负数时不会继续打印直接退出循环
#include <stdio.h>
int main(void){
	int days = 1;
	const int days_per_week = 7; 
	
	printf("enter days:\n");
	while(scanf("%d", &days) == 1, days > 0)//了解下scanf的返回值，逗号运算符
	{
		printf("%d days are %d weeks, %d days.\n", days, days / days_per_week, days % days_per_week);
		printf("enter days:\n");
	}
	return 0;
}
