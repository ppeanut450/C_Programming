#include <stdio.h>
int main(void)
{
	double num;
	int inv;
	double result = 1.0;
	int i;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &num);

	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &inv);

	for (i = 1; i <= inv; i++)
	{
		result *= num;
	}

	printf("������� %lf\n", result);

	return 0;
}