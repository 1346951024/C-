#define _CRT_SECURE_NO_WARNINGS 1
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数

	int left = 0;//数组最左边数的下标
	int right = sz - 1;//数组最右边数的下标

	while (left <= right)//防止交叉
	{
		int mid = (left + right) / 2;//mid是中间数的下标
		if (arr[mid] > k)
		{
			right = mid - 1;//中间数在k右边，查找范围变为最左边的数和中间数前一个数之间
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;//中间数在K左边，查找范围变为中间数后一个数与最右边的数之间
		}

		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)//左大于右，即交叉
	{
		printf("找不到！\n");
	}

return 0;
}