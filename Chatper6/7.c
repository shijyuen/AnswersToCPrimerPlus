#include <stdio.h>
#include <strings.h>
int main(void){
	char word[40];
	int count;
	
	printf("enter a word:\n");
	scanf("%s", word);//²»ÓÃ&ÁË
	for(count = strlen(word) -1; count >= 0; count--){
		printf("%c", word[count]);
	} 
	printf("\n");
	return 0;
}
