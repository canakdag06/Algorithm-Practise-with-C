#include<stdio.h>
#include<locale.h>
#include<math.h>
float kuvvet(int,int,float);
static double g = 6.673* pow(10,-11);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int m1,m2;
	float uzaklik;
	printf("Cisimlerin a��rl���n� giriniz	(kg)	: ");
	scanf("%d %d",&m1,&m2);
	printf("Aralar�ndaki uzakl��� giriniz	(m)		: ");
	scanf("%f",&uzaklik);
	printf("-------------------------------------------\n");
	printf("�ekim kuvveti = %f",kuvvet(m1,m2,uzaklik));
return 0;
}

float kuvvet(int m1, int m2, float uzaklik)
{
	return (g*m1*m2) / (uzaklik*uzaklik);
}
