#include <stdio.h>

int get_tax(int income)
{
	if (income <= 1000)
		return income * 0.08;
	else
		return income * 0.1;
}

int main(void)
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf_s("%d", &income);
	printf("�ҵ漼�� %d�Դϴ�.", get_tax(income));

	return 0;
}