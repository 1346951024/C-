#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("********1.������Ϸ***********\n");
	printf("********2.�˳�***************\n");
	printf("*****************************\n");

}

void game()
{
	int guess = 0;//�µ�����
	int ret = rand() % 100 + 1;//���Բ����������-> rand��������0-32767֮����������
	while (1)
	{
		printf("������֣�\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}



	}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//time����������һ��ʱ���
	//ʱ�����������ڵ���time���������ʱ��ͼ��������ʼʱ�䣨1970.1.1 0:0:0��֮���һ����ֵ

	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;

		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}


	} while (input);
	return 0;
}