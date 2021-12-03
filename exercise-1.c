#include <stdio.h>

int main()
{
	int a, j ,k;
	printf("Enter a number you want multiplication table of:\n");

	scanf("%d", &a);

	for(j = 1; j < 11; j++){
		k = a * j;
		printf("------------\n");
		printf("%d X %d = %d \n", a, j, k);
		printf("------------\n");
	}


	return 0;
}