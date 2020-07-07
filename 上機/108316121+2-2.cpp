#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Enter  num1\n");
	scanf("%d", &num1);

	printf("Enter  num2\n");
 	scanf("%d", &num2);
	if (num1 > num2)
	{
		printf("num1是比較大的數\n");
	}

	if (num1 < num2)
	{
		printf("num2是比較大的數\n");
	}

	if (num1 ==num2)
	{
		printf("num1等於num2\n");
	}
	system("pause");
	return 0;
}