#include <stdio.h>
int is_leap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 366;
	else
		return 365;
}

int main(void)
{
	int year;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	printf("%d���� %d���Դϴ�.", year, is_leap(year));

	return 0;
}