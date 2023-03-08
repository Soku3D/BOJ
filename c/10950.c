#include <stdio.h>

int main(void)
{
	int T, N1, N2;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i)
	{
		scanf("%d %d", &N1, &N2);
		printf("%d\n", N1+N2);
	}
}