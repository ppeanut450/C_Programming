#include <stdio.h>
#define PI 3.141592;

double cal_area(double radius)
{
	return radius * radius * PI;
}

int main(void)
{
	double radius;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);

	printf("���� ������ %lf�Դϴ�.",cal_area(radius));

	return 0;
}