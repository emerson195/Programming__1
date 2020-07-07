#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int basic;
	int integer1;
	int integer2;
	int revenue; /*銷售額*/
	int sum;/*本月薪資*/

	basic = 15000;   /*底薪:15000元*/
	sum == basic + revenue *0.1;
	sum == basic + revenue *0.2;

	printf("Enter revenue\n");
	scanf("%d", &revenue);    /*輸入銷售額*/

	if (revenue > 100000 && revenue < 200000) {
		
		sum = basic + revenue *0.1;
		printf("本月薪資= %d",sum);
		scanf("%d", &sum);      /*如果銷售額大於10000,本月薪資為底薪+銷售額*0.1=本月薪資*/
	}
	else if(revenue > 200000) {
		sum = basic + revenue *0.2;
		printf("本月薪資= %d",sum);
		scanf("%d", &sum);      /*如果銷售額大於20000,本月薪資為底薪+銷售額*0.2=本月薪資*/
	}
	else {
		printf("本月薪資= 15000");
	}
	return 0;
}