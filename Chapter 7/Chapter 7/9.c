#include <stdio.h>
int main(void)
{
	int i, sum = 0;

	for (i = 1; ; i++)
	{
		sum += i;

		if (sum > 10000)
		{
			sum -= i;
			i--;
			printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
			break;
		}
	}
}