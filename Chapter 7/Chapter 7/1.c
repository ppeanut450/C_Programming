#include <stdio.h>
int main(void)
{
	int num, i;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	
	for (i = num; i >= 1; i--)
	{
		printf("%d ", i);
	}

	return 0;
}