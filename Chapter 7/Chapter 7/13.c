#include <stdio.h>
int main(void)
{
	int n, r, i, per = 1;
	printf("n�� ��: ");
	scanf_s("%d", &n);
	printf("r�� ��: ");
	scanf_s("%d", &r);

	for (i = 0; i < r; i++)
	{
		per *= n - i;
	}
	printf("������ ���� %d�Դϴ�.", per);

	return 0;
}