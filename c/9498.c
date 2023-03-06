#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	char score = ((num >= 60) ? ((num >= 70) ? ((num >= 80) ? ((num >= 90) ? 'A' : 'B') : 'C') : 'D') : 'F');
	printf("%c", score);
	

	return 0;
}