#include <stdio.h>
#include <string.h>
int main(void){
	char name[40];
	
	printf("enter your first name:\n");
	scanf("%s", name);
	
	int len = strlen(name);
	
	printf("a.\"%s\"\n", name);
	printf("b.\"%20s\"\n", name);
	printf("c.\"%-20s\"\n", name);
	printf("d.%*s", len+3, name);
	
	return 0;
}
