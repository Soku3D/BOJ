#include <stdio.h>

int main(void)
{
	int N, sum=0;
	while(scanf("%d", &N)!=EOF)
	{
		sum+=N;
	}
	printf("%d",sum);
	return 0;
}