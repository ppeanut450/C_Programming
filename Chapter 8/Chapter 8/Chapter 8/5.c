#include <stdio.h>
int round(double f)
{
	return f + 0.5;
}

int main(void)
{
	double num;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &num);

	printf("�ݿø��� ���� %d�Դϴ�.", round(num));
}