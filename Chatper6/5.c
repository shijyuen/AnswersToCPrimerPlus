#include <stdio.h>
int main(void){
	char letter;
	int row, position, space;
	
	printf("Enter a uppercase letter:\n");
	scanf("%c", &letter);
	
	int ROWS = letter - 'A' + 1;
	//printf("%d\n", ROWS);
	
	for(row = 1; row <= ROWS; row++){
		for(space = ROWS - row + 1; space > 0; space--){
			printf(" ");}
		for(position = 0; position < row; position++){
			printf("%c", 'A' + position);}
		for(position--; position > 0; position--){
			printf("%c", 'A' + position - 1);}
			
			printf("\n");
		} 
	return 0;
}
