#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
void game()
{
	int ret = 0, guess = 0, punish = 0;
	printf("guess the number form 1 to 100\n");
	ret = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess > 100 || guess < 1)
		{
			printf("���ֲ��ڷ�Χ��\n");
			continue;
		}
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�㵹ù�ˣ���������ͷ�:>");
			punish = rand() % 3 + 1;
			switch (punish)
			{
			case 1:printf("˵����ɵ��ʮ��\n");break;
			case 2:printf("����������\n");break;
			case 3:printf("�������ˣ��ӹ��ͷ�\n");break;
			}
			break;
		}
	}
}
void menu()
{
	printf("******************************\n");
	printf("***** 1.play      0.exit *****\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("please choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("game began\n");
			game();
			break;
		case 0:
			printf("goodbye\n");
			break;
		default:
			printf("the number is error,please input again!\n");
			break;
		}
	} while (input);
	return 0;
}