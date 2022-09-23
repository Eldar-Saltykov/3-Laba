#include <stdio.h>
#include <locale.h>
#define D  2.54
#define P  2.32166

void main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	puts("Введите число");
	scanf("%d", &num1);
	printf("Выведенно число %d\n\t ", num1);

	puts("Введите 2 число\n\t");
	scanf("%d", &num2);
	printf("Сумма = %d , Разность = %d, Произведение = %d, Частное = %d, Остаток = %d\n",
		num2 + num1, num2 - num1, num2 * num1, num2 / num1, num2 % num1);
	int   dym;

	float result1, result2;
	puts("Введите значение для рассчёта");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	printf(" % d дюймов – это % .2f см\n", dym, result1);
	printf(" % d пулгада – это % .7f см\n", dym, result2);

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




