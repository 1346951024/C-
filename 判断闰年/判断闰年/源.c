#define _CRT_SECURE_NO_WARNINGS 1

int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}




int main()
{
	int year = 0;
	printf("��������ݣ�\n");
	scanf("%d", &year);
	if (is_leap_year(year) == 1)
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d�������꣡\n", year);
	}


	return 0;
}