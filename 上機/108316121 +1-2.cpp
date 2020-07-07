#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float integer1;
	float integer2;
	float integer3;
	float sum;
	float average;

	printf("Enter first integer\n");
	scanf("%f", &integer1);

	printf("Enter second integer\n");
	scanf("%f", &integer2);

	printf("Enter third integer\n");
	scanf("%f", &integer3);

	sum = integer1 + integer2 + integer3;


	average = sum / 3;

	printf("average is %f\n", average);

	system("pause");

	return 0;

}