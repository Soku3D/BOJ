#include <stdio.h>

int main(void)
{
	int num[3];
	scanf("%d %d %d", &num[0], &num[1],&num[2]);
	for(int i=1; i<3; i++)
	{
		int key = num[i];
		int j=i-1;
		for(; j>=0; --j)
		{
			if(num[j]>num[i])
			{
				num[j+1]=num[j];
			}
			else
				break;
		}
		num[j+1] = key;
	}
	for(int i=0; i<3; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}