#include <stdio.h>
#include <locale.h>
#define D  2.54
#define P  2.32166

void main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	puts("������� �����");
	scanf("%d", &num1);
	printf("��������� ����� %d\n\t ", num1);

	puts("������� 2 �����\n\t");
	scanf("%d", &num2);
	printf("����� = %d , �������� = %d, ������������ = %d, ������� = %d, ������� = %d\n",
		num2 + num1, num2 - num1, num2 * num1, num2 / num1, num2 % num1);
	int   dym;

	float result1, result2;
	puts("������� �������� ��� ��������");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	printf(" % d ������ � ��� % .2f ��\n", dym, result1);
	printf(" % d ������� � ��� % .7f ��\n", dym, result2);

	int a, b, res1, res2, res3;
	puts("������� ����� �");
	scanf("%d", &a);
	puts("������� ����� b");
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




