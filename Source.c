#include<stdio.h>
#include<locale.h>
#define D  2.54
#define P  2.32166
int  main()
{
	setlocale(LC_ALL, "RUS");
	int   dym;

	float result1, result2;
	puts("¬ведите значение дл€ рассчЄта");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	printf(" % d дюймов Ц это % .2f см\n" , dym, result1);
	printf(" % d пулгадаЦ это % .7f см", dym, result2);



}