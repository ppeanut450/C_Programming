#include <stdio.h>
int main(void)
{
	int num, i, j;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}