#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int max(int x, int y)
{   
	int z;
	if (x > y)
		z = x;
	else z = y;
	return z;
}
int main()
{
	int a = 0;
	int b = 0;
	int z = 0;
	printf("输入两个数：");
		scanf("%d %d", &a, &b);
		z = max(a, b);
	printf("z = %d\n", z);
	return 0;
}