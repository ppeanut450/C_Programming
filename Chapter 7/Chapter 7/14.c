#include <stdio.h>
int main(void)
{
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	
	do
	{
		printf("%d", num % 10);
		num /= 10;
	} while (num % 10 != 0);
}