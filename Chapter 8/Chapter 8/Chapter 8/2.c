#include <stdio.h>
int check_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return 1;
	else
		return 0;
}

int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s(" %c", &c);

	if (check_alpha(c) == 1)
		printf("%c�� ���ĺ� �����Դϴ�.", c);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", c);

	return 0;
}