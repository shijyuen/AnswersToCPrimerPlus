#include <stdio.h>
int main(void){
	int num[10];
	int count;
	
	for(count = 0; count <= 7; count++){
		scanf("%d", &num[count]);
	}
	for(count = 7; count >= 0; count--){
		printf("%d", num[count]);
	}
	
	return 0;
}
