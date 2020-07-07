#define CRT _SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int m =0;
	int counter=0;
	while (1)
	{
        printf("請輸入正整數:m,代表有m 組資料,且1 <= m <= 10\n");
		scanf_s("%d",&m);

		if (m >= 1 && m <= 10)
		{
			break;
		}
		else
			printf("輸入錯誤，請重新輸入，m 要大於等於1且小於等於10\n");
	}

	double x = 0, y = 0;
	double distance;
	int score = 0;
	int area = 0;
	int A, B, C, D, E, F, G, H, I, J, K;
	/*while (m >= 1 && m <= 10) {*/
		for (counter = 0; counter <= m-1; counter++) {
			printf("請輸入飛鏢射中的位置，x座標和y座標\n");
			scanf_s("%lf %lf", &x, &y);

		


		distance = sqrt((x - 10) * (x - 10) + (y - 10) * (y - 10));
		if (distance <= 1)
		{
			A = area;
			score = 10;
		}
		else if (distance <= 2)
		{
			B = area;
			score = 9;
		}
		else if (distance <= 3)
		{
			C = area;
			score = 8;

		}
		else if (distance <= 4)
		{
			D = area;
			score = 7;
		}
		else if (distance <= 5)
		{
			E = area;
			score = 6;
		}
		else if (distance <= 6)
		{
			F = area;
			score = 5;
		}
		else if (distance <= 7)
		{
			G = area;
			score = 4;
		}
		else if (distance <= 8)
		{
			H = area;
			score = 3;
		}
		else if (distance <= 9)
		{
			I = area;
			score = 2;
		}
		else if (distance <= 10)
		{
			J = area;
			score = 1;
		}
		else
		{
			K = area;
			score = 0;
		}
		
	//}
		
    printf("得%d分\n", score);
//	scanf_s("%d", &score);
	}
	system("pause");
	return 0;
}
	/*switch (area) 
	{
	case 'A':
		printf("區域 A");
		score += 10;
		break;
	case 'B':
		printf("區域 B");
		score += 9;
		break;
	case 'C':
		printf("區域 C");
		score += 8;
		break;
	case 'D':
		printf("區域 D");
		score += 7;
		break;
	case 'E':
		printf("區域 E");
		score += 6;
		break;
	case 'F':
		printf("區域 F");
		score += 5;
		break;
	case 'G':
		printf("區域 G");
		score += 4;
		break;
	case 'H':
		printf("區域 H");
		score += 3;
		break;
	case 'I':
		printf("區域 I");
		score += 2;
		break;
	case 'J':
		printf("區域 J");
		score += 1;
		break;
	case 'K':
		printf("區域 K");
		score += 0;
		break;
	}	*/
	
	
	/*if (distance <= 1)
	{
		printf("射中A區域得10分");
		score += 10;
	}
	else if (distance <= 2)
	{
		printf("射中B區域得9分");
		score += 9;
	}
	else if (distance <= 3)
	{
		printf("射中C區域得8分");
		score += 8;
	}
	else if (distance <= 4)
	{
		printf("射中D區域得7分");
		score += 7;
	}
	else if (distance <= 5)
	{
		printf("射中E區域得6分");
		score += 6;
	}
	else if (distance <= 5)
	{
		printf("射中F區域得5分");
		score += 5;
	}
	else if (distance <= 4)
	{
		printf("射中F區域得4分");
		score += 4;
	}
	else if (distance <= 5)
	{
		printf("射中F區域得3分");
		score += 3;
	}
	else if (distance <= 5)
	{
		printf("射中F區域得2分");
		score += 2;
	}*/



