#include<stdio.h>
#include<locale.h>

int main()
{
	float ay;
	char p;
	setlocale(LC_ALL, "Turkish");
	printf("�al��ma durumunu giriniz(Memur M/m - Di�er D/d): ");
	scanf("%c",&p);
	printf("Toplam �al��ma s�renizi giriniz(ay): ");
	scanf("%f",&ay);
	printf("------------------------------------------------");
	
	if(p == 'M' || p == 'm')
	{
		if(ay<12)
		{
		printf("\n�zg�n�z tam 1 y�l dolmad��� i�in izin hakk�n�z yok");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,ay/12);
		}
		else if((ay/12)>=1 && (ay/12)<=10)
		{
		printf("\n20 g�n izin hakk�n�z var, hadi yine iyisiniz");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,ay/12);
		}
		else if((ay/12)>10)
		{
		printf("\n30 g�n izin hakk�n�z var, hadi yine iyisiniz");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,ay/12);
		}
	}
	
	if(p == 'D' || p == 'd')
	{
		if(ay<12)
		{
		printf("\n�zg�n�z tam 1 y�l dolmad��� i�in izin hakk�n�z yok");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,(float)ay/12);
		}
		else if((ay/12)>=1 && (ay/12)<6)
		{
		printf("\n14 g�n izin hakk�n�z var, hadi yine iyisiniz");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,(float)ay/12);
		}
		else if((ay/12)>=6 && (ay/12)<15)
		{
		printf("\n20 g�n izin hakk�n�z var, hadi yine iyisiniz");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,(float)ay/12);
		}
		else if((ay/12)>=15)
		{
		printf("\n26 g�n izin hakk�n�z var, hadi yine iyisiniz");
		printf("\n�al��ma s�reniz = %.2f ay = %.2f y�l eder",ay,(float)ay/12);
		}
	}
return 0;
}
