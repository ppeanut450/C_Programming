#include <stdio.h>
int is_multiple(int n, int m)
{
	if (n % m == 0)
		return 1;
	else
		return 0;
}

int main(void)
{
	int n, m;
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m);

	if (is_multiple(n, m) == 0)
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);
	else
		printf("%d�� %d�� ����Դϴ�.", n, m);

	return 0;
}