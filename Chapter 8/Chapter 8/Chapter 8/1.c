#include <stdio.h>
double square(double num)
{
	return num * num;
}

int main(void)
{
	double num;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &num);

	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", num, square(num));
	
	return 0;
}