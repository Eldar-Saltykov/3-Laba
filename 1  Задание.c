#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int num1, num2;
	puts(" Введите число");
	scanf("%d", &num1);
	printf("Выведенно число %d\n\t ", num1); 

	puts("Введите 2 число\n\t");
	scanf("%d", &num2);
	printf("Сумма = %d , Разность = %d, Произведение = %d, Частное = %d, Остаток = %d",
		num2 + num1, num2 - num1, num2 * num1, num2 / num1 , num2 % num1);
	

	 
}
