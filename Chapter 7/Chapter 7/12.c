#include <stdio.h>
int main(void)
{
	int num, i;
	int x = 0, y = 1, tmp;

	printf("���° �ױ��� ���ұ��? ");
	scanf_s("%d", &num);
	
	for (i = 0; i <= num; i++)
	{
		printf("%d, ", x);
		tmp = x + y;
		x = y;
		y = tmp;
	}
}