#include <stdio.h>
int main(void){
	int num, num2, cnt, m;
	double sum, sum2;
	
	printf("enter a limit:\n");
	scanf("%d", &num);
	
	for(cnt = 1; cnt &lt;= num; cnt++){
		sum += 1.0 / (double)cnt;
		
	}
	printf("%f\n", sum);
	printf("enter num2:\n");
	scanf("%d", &num2);
	for(cnt = 1, m= -1, sum2 = 0; cnt &lt;= num2; cnt++){
		m *= -1;
		sum2 += m * (1.0 / (double)cnt);
		
	}
	printf("%f\n", sum2);
	
}
