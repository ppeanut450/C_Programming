#include <stdio.h>
int even(int n)
{
	if (n % 2 == 0)
		return 1;
	else
		return 0;
}

int absolute(int n)
{
	if (n > 0)
		return n;
	else
		return -n;
}

int sign(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	if(even(n)==1)
		printf("even()�� ���: ¦��\n");
	else
		printf("even()�� ���: Ȧ��\n");
	
	printf("absolute()�� ���: %d\n", absolute(n));

	if (sign(n) == -1)
		printf("sign()�� ���: ����\n");
	else if (sign(n) == 0)
		printf("sign()�� ���: 0\n");
	else
		printf("sign()�� ���: ���\n");

	return 0;
}