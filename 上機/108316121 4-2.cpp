#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, a, b;
	while (1)
	{
		printf("請輸入正整數m:");
		scanf("%d", &a);
		printf("請輸入正整數n:");
		scanf("%d", &b);
		if (a <= b)
		{
			break;
		}
		else
			printf("m必須小於等於n，請重新輸入!");
	}
	printf("%d到%d間的質數有:\n", a, b);
	for (int i = a; i <= b; i++)
	{
		n = 0;
		for(int j = 1; j <= i; j++)
			if (i % j == 0)
				n++;
		if (n == 2)
			printf("%d\t", i);
	}

	return 0;
}