#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���


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
	printf("���������֣�\n");
	scanf("%d", &n);
	table(n);
	return 0;
}