#include <stdio.h>

extern int cnt;

void write_extern(void)
{
	printf("count is %d\n", cnt);
}

int max(int num1, int num2){
	int result;

	if (num1 > num2) {
		result = num1;
	}else{
		result = num2;
	}
	return result;
}