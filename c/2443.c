#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if(j<i)
				printf(" ");
			else	
				for (int k = 0; k < 2*(N-i)-1; ++k)
				{
					printf("*");
				}
		}
		printf("\n");
	}
}