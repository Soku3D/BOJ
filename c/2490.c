#include <stdio.h>

int main(void)
{
	int updown;
	
	for (int i = 0; i < 3; ++i)
	{
		int score[2] = {0,};
		for (int j = 0; j < 4; ++j)
		{
			scanf("%d", &updown);
			score[updown]++;
		}
		if(score[0]==0)
			printf("%c\n", 69);
		else
			printf("%c\n", score[0]+64);
	}
	return 0;
}