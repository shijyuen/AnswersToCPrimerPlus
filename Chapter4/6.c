#include <stdio.h>
#include <string.h>
int main(void){
	char first_name[40];
	char last_name[40];
	printf("enter your first name:\n");
	scanf("%s", first_name);
	printf("enter your last name:\n");
	scanf("%s", last_name);
	int first_len = strlen(first_name);
	int last_len = strlen(last_name);
	
	printf("%s %s\n%*d %*d\n", first_name, last_name, first_len, first_len, last_len, last_len);
	printf("%s %s\n%-*d %-*d\n", first_name, last_name, first_len, first_len, last_len, last_len);
	
	return 0;
}
