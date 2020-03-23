#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("********1.继续游戏***********\n");
	printf("********2.退出***************\n");
	printf("*****************************\n");

}

void game()
{
	int guess = 0;//猜的数字
	int ret = rand() % 100 + 1;//电脑产生的随机数-> rand函数返回0-32767之间的随机整数
	while (1)
	{
		printf("请猜数字：\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了！\n");
		}
		else if (guess < ret)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}



	}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//time函数，返回一个时间戳
	//时间戳：计算机在调用time函数的这个时间和计算机的起始时间（1970.1.1 0:0:0）之间的一个差值

	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;

		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}


	} while (input);
	return 0;
}