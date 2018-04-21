#include <stdio.h>
int main(){
	float download_speed, size;
	
	printf("enter download speed:\n");
	scanf("%f", &download_speed);
	printf("enter size:\n");
	scanf("%f", &size);
	printf("at %f megabits per sec, a file of %f megabytes\ndownloads in %f seconds.", download_speed, size, download_speed / size);
	
	return 0;
}
