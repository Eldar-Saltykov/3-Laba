                                                                    // ЗАДАНИЕ 3 //
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int a, b, res1, res2, res3;
	puts("Введите число а");
	scanf("%d", &a);
	puts("Введите число b");
	scanf("%d", &b);
	res1 = a * b;
	res2 = a + b;
	res3 = a - b;
	printf("-------------------------------\n");
	printf("|  a *  b |  a +  b |  a -  b |\n");
	printf("-------------------------------\n");
	printf("| %2d * %2d | %2d + %2d | %2d - %2d |\n", a, b, a, b, a, b);
	printf("-------------------------------\n");
	printf("|    %2d   |   %2d    |    %2d   |\n", res1, res2, res3);




}
