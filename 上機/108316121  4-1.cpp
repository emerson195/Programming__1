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
		printf("請問你要吃什麼: 1)豪華壽司便當 2)養生菇菇便當 3)繽紛炒飯 -1)結束: ");
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
			printf("%s", "輸入錯誤,請重新輸入\n");
			break;
    }
		
	
	}
	printf("訂購便當:\n");
	/*sum = integer1 + integer2 + integer3;*/
	printf("共%d人訂購\n",sum);
	printf("豪華壽司便當 %d個\n",integer1);
	printf("養生菇菇便當 %d個\n",integer2);
	printf("繽紛炒飯 %d個\n",integer3);

	system("pause");
	return 0;
}