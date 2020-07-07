#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int Price;
	int Age;
	int Identify;
	int student;
	int other;
	int x;
	int y;

	printf("Enter Age\n");
	scanf("%d", &Age);           /*輸入年齡*/



								 /*printf("");*/
	printf("student=1 \n");
	printf("other=2 \n");

	printf("Enter Identify  student or  other \n");

	student = 1;
	other = 2;
	scanf("%d", &Identify);      /*輸入身分*/

	if ((Age <= 0 || Identify != 1) || Identify != 2)
	{
		printf("重新輸入\n");
	}






	  /*原價200元*/
				  /*x = 120;*/      /* 年齡小於等於6歲，或大於等於60歲，120元*/
									/*y = 160;*/      /*身分為學生，且年齡大於6歲，小於等於20歲，160元*/



	else if (Identify = 1 && (Age > 6 && Age <= 20))/*身分為學生，且年齡大於6歲，小於等於20歲，160元*/
	{
		printf("票價 =160元\n");
		scanf("%d", &Identify);
		scanf("%d", &Age);
	}

	else if (Age <= 6 || Age >= 60)
	{
		printf("票價 =120元\n");   /*年齡小於等於6歲，或大於等於60歲 票價:120元*/
		scanf("%s", &Identify);
		scanf("%d", &Age);
	}

	else
	{
		printf("票價 =200元\n"); /*不屬於優待身分,原價:200*/
	}


	return 0;

}
