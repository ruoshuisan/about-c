#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int amount;
	int price = 0;
	printf("��������");
	scanf("%d", &price);
	printf("����Ʊ��");
	scanf("%d", &amount);
	int chang = amount - price;
	printf("%d", chang);
	return 0;
}