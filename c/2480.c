#include <stdio.h>

int main(void)
{
	int diceCount[7];
	int dice, maxVal;
	for (int i = 0; i < 3; ++i)
	{
		scanf("%d", &dice);
		diceCount[dice]++;
	}
	for (int i = 1; i <= 6; ++i)
	{
		if(diceCount[i])
		{
			if(diceCount[i]==3)
			{
				printf("%d", 10000+i*1000);
				return 0;
			}
			else if(diceCount[i]==2)
			{

				printf("%d", 10000+i*1000);
				return 0;

			}
			else
				maxVal = i;
		}
		printf("%d", maxVal*100);

	}
}