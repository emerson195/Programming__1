#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, a, b;
	while (1)
	{
		printf("�п�J�����m:");
		scanf("%d", &a);
		printf("�п�J�����n:");
		scanf("%d", &b);
		if (a <= b)
		{
			break;
		}
		else
			printf("m�����p�󵥩�n�A�Э��s��J!");
	}
	printf("%d��%d������Ʀ�:\n", a, b);
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