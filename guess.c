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
			printf("数字不在范围内\n");
			continue;
		}
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("你倒霉了，生成随机惩罚:>");
			punish = rand() % 3 + 1;
			switch (punish)
			{
			case 1:printf("说我是傻逼十次\n");break;
			case 2:printf("发个随机红包\n");break;
			case 3:printf("算你幸运，逃过惩罚\n");break;
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