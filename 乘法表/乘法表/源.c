#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


void table(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%-2d * %-2d=%-4d", i, j, i*j);
		}
		printf("\n");
	}

}

int main()
{
	int n = 0;
	printf("请输入数字：\n");
	scanf("%d", &n);
	table(n);
	return 0;
}