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
	scanf("%d", &Age);           /*��J�~��*/



								 /*printf("");*/
	printf("student=1 \n");
	printf("other=2 \n");

	printf("Enter Identify  student or  other \n");

	student = 1;
	other = 2;
	scanf("%d", &Identify);      /*��J����*/

	if ((Age <= 0 || Identify != 1) || Identify != 2)
	{
		printf("���s��J\n");
	}






	  /*���200��*/
				  /*x = 120;*/      /* �~�֤p�󵥩�6���A�Τj�󵥩�60���A120��*/
									/*y = 160;*/      /*�������ǥ͡A�B�~�֤j��6���A�p�󵥩�20���A160��*/



	else if (Identify = 1 && (Age > 6 && Age <= 20))/*�������ǥ͡A�B�~�֤j��6���A�p�󵥩�20���A160��*/
	{
		printf("���� =160��\n");
		scanf("%d", &Identify);
		scanf("%d", &Age);
	}

	else if (Age <= 6 || Age >= 60)
	{
		printf("���� =120��\n");   /*�~�֤p�󵥩�6���A�Τj�󵥩�60�� ����:120��*/
		scanf("%s", &Identify);
		scanf("%d", &Age);
	}

	else
	{
		printf("���� =200��\n"); /*���ݩ��u�ݨ���,���:200*/
	}


	return 0;

}
