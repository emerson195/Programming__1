#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int basic;
	int integer1;
	int integer2;
	int revenue; /*�P���B*/
	int sum;/*�����~��*/

	basic = 15000;   /*���~:15000��*/
	sum == basic + revenue *0.1;
	sum == basic + revenue *0.2;

	printf("Enter revenue\n");
	scanf("%d", &revenue);    /*��J�P���B*/

	if (revenue > 100000 && revenue < 200000) {
		
		sum = basic + revenue *0.1;
		printf("�����~��= %d",sum);
		scanf("%d", &sum);      /*�p�G�P���B�j��10000,�����~�ꬰ���~+�P���B*0.1=�����~��*/
	}
	else if(revenue > 200000) {
		sum = basic + revenue *0.2;
		printf("�����~��= %d",sum);
		scanf("%d", &sum);      /*�p�G�P���B�j��20000,�����~�ꬰ���~+�P���B*0.2=�����~��*/
	}
	else {
		printf("�����~��= 15000");
	}
	return 0;
}