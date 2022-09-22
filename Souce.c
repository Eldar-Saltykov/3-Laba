#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "RUS");
	int c;
	float res1, res2;
	puts("Введите значение градусов по Цельсию");
	scanf(" %d", &c);
	res1 = ( c * 9. / 5) + 32;
	res2 = c + 273;
	printf("Градусы по Фарингейту %.2f\n", res1);
	printf("Градусы по Кельвину %.f", res2);

}
