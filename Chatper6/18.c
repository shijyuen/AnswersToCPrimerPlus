#include <stdio.h>
int main(void){
	int fri = 5;
	int weeks = 1;
	const int Dunbar_number = 150;
	
	while(fri < Dunbar_number){
		fri = (fri - weeks) * 2;
		printf("%d weeks %d friends\n",weeks, fri);
		weeks++;
	}
	return 0;
}
