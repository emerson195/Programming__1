#define _CRT_SECURE_NO _WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int integer1 = 0;
	int integer2 = 0;
	int integer3 = 0;
	int value = 0;
	int sum;
	
	for (sum = 0; value != -1; )
	{
		printf("�аݧA�n�Y����: 1)���عإq�K�� 2)�i��ۣۣ�K�� 3)�}�ɪ��� -1)����: ");
		scanf_s("%d", &value);
       /*if("value != 1 && value != 2 ")*/
		switch (value)
		{
		case 1:
			integer1 += 1;
			sum += 1;
			break;
		case 2:
			integer2 += 1;
			sum += 1;
			break;
		case 3:
			integer3 += 1;
			sum += 1;
			break;

		default:
			printf("%s", "��J���~,�Э��s��J\n");
			break;
    }
		
	
	}
	printf("�q�ʫK��:\n");
	/*sum = integer1 + integer2 + integer3;*/
	printf("�@%d�H�q��\n",sum);
	printf("���عإq�K�� %d��\n",integer1);
	printf("�i��ۣۣ�K�� %d��\n",integer2);
	printf("�}�ɪ��� %d��\n",integer3);

	system("pause");
	return 0;
}