#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int year;
	scanf("%d",&year);
	bool check = ((year%4==0)?((year%100==0)?((year%400==0)?true:false):true):false);
	printf("%d", check);
	return 0;
}