#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand()
{
	srand((unsigned)time(NULL));
	return rand() % 2;
}

int main(void)
{
	int coin;
	char q = 'y';
	while (q != 'n')
	{
		printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0): ");
		scanf_s("%d", &coin);

		if (b_rand() == coin)
			printf("�¾ҽ��ϴ�.\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n");

		printf("��� �Ͻðڽ��ϱ�?(y �Ǵ� n): ");
		scanf_s(" %c", &q);
	}	

	return 0;
}