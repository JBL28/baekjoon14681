#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d\n%d", &x, &y);
	if (x < 0)
		if (y < 0)
			printf("3");
		else
			printf("2");
	else
		if (y < 0)
			printf("4");
		else
			printf("1");
	return 0;
}