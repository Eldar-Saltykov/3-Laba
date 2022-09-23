#include<stdio.h>
#include<locale.h>

int s_plo(int n)
{
	int res1 = n / 100;
	return res1;
}
int s_plo2(int n)
{
	int res2 = (n / 10) % 10;
	return res2;
}
int s_plo3(int n)
{
	int res3 = n % 10;
	return res3;
}


  int main()
{
	  int n;
	  int res1, res2, res3;
   setlocale(LC_ALL, "RUS");
	puts("Введите трёхзначное число");

	scanf("%d", &n);
	res1 = s_plo (n);
	res2 = s_plo2( n);
	res3 = s_plo3( n);
    puts("Введите трёхзначное число");
	
	printf("В этом числе\n сотен : %.d\n десятков : %.d\n единиц : %.d", res1, res2, res3);
	
}




