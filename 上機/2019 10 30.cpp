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
        printf("�п�J�����:m,�N��m �ո��,�B1 <= m <= 10\n");
		scanf_s("%d",&m);

		if (m >= 1 && m <= 10)
		{
			break;
		}
		else
			printf("��J���~�A�Э��s��J�Am �n�j�󵥩�1�B�p�󵥩�10\n");
	}

	double x = 0, y = 0;
	double distance;
	int score = 0;
	int area = 0;
	int A, B, C, D, E, F, G, H, I, J, K;
	/*while (m >= 1 && m <= 10) {*/
		for (counter = 0; counter <= m-1; counter++) {
			printf("�п�J����g������m�Ax�y�ЩMy�y��\n");
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
		
    printf("�o%d��\n", score);
//	scanf_s("%d", &score);
	}
	system("pause");
	return 0;
}
	/*switch (area) 
	{
	case 'A':
		printf("�ϰ� A");
		score += 10;
		break;
	case 'B':
		printf("�ϰ� B");
		score += 9;
		break;
	case 'C':
		printf("�ϰ� C");
		score += 8;
		break;
	case 'D':
		printf("�ϰ� D");
		score += 7;
		break;
	case 'E':
		printf("�ϰ� E");
		score += 6;
		break;
	case 'F':
		printf("�ϰ� F");
		score += 5;
		break;
	case 'G':
		printf("�ϰ� G");
		score += 4;
		break;
	case 'H':
		printf("�ϰ� H");
		score += 3;
		break;
	case 'I':
		printf("�ϰ� I");
		score += 2;
		break;
	case 'J':
		printf("�ϰ� J");
		score += 1;
		break;
	case 'K':
		printf("�ϰ� K");
		score += 0;
		break;
	}	*/
	
	
	/*if (distance <= 1)
	{
		printf("�g��A�ϰ�o10��");
		score += 10;
	}
	else if (distance <= 2)
	{
		printf("�g��B�ϰ�o9��");
		score += 9;
	}
	else if (distance <= 3)
	{
		printf("�g��C�ϰ�o8��");
		score += 8;
	}
	else if (distance <= 4)
	{
		printf("�g��D�ϰ�o7��");
		score += 7;
	}
	else if (distance <= 5)
	{
		printf("�g��E�ϰ�o6��");
		score += 6;
	}
	else if (distance <= 5)
	{
		printf("�g��F�ϰ�o5��");
		score += 5;
	}
	else if (distance <= 4)
	{
		printf("�g��F�ϰ�o4��");
		score += 4;
	}
	else if (distance <= 5)
	{
		printf("�g��F�ϰ�o3��");
		score += 3;
	}
	else if (distance <= 5)
	{
		printf("�g��F�ϰ�o2��");
		score += 2;
	}*/



