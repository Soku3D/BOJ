#include <stdio.h>

int main(void)
{
	char str[101];
	while(scanf("%[^\n]", str) != EOF)
	{
		printf("%s", str);
	}
}