#include <stdio.h>
int main(void)
{
	int num, i, sum = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		sum += i * i;
	}

	printf("��갪�� %d�Դϴ�.", sum);
}