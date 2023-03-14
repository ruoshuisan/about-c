#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int amount;
	int price = 0;
	printf("请输入金额");
	scanf("%d", &price);
	printf("输入票面");
	scanf("%d", &amount);
	int chang = amount - price;
	printf("%d", chang);
	return 0;
}