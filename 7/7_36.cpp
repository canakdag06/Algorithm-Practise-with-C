#include<stdio.h>
#include<locale.h>

int main()
{
	float ay;
	char p;
	setlocale(LC_ALL, "Turkish");
	printf("Çalýþma durumunu giriniz(Memur M/m - Diðer D/d): ");
	scanf("%c",&p);
	printf("Toplam çalýþma sürenizi giriniz(ay): ");
	scanf("%f",&ay);
	printf("------------------------------------------------");
	
	if(p == 'M' || p == 'm')
	{
		if(ay<12)
		{
		printf("\nÜzgünüz tam 1 yýl dolmadýðý için izin hakkýnýz yok");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,ay/12);
		}
		else if((ay/12)>=1 && (ay/12)<=10)
		{
		printf("\n20 gün izin hakkýnýz var, hadi yine iyisiniz");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,ay/12);
		}
		else if((ay/12)>10)
		{
		printf("\n30 gün izin hakkýnýz var, hadi yine iyisiniz");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,ay/12);
		}
	}
	
	if(p == 'D' || p == 'd')
	{
		if(ay<12)
		{
		printf("\nÜzgünüz tam 1 yýl dolmadýðý için izin hakkýnýz yok");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,(float)ay/12);
		}
		else if((ay/12)>=1 && (ay/12)<6)
		{
		printf("\n14 gün izin hakkýnýz var, hadi yine iyisiniz");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,(float)ay/12);
		}
		else if((ay/12)>=6 && (ay/12)<15)
		{
		printf("\n20 gün izin hakkýnýz var, hadi yine iyisiniz");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,(float)ay/12);
		}
		else if((ay/12)>=15)
		{
		printf("\n26 gün izin hakkýnýz var, hadi yine iyisiniz");
		printf("\nÇalýþma süreniz = %.2f ay = %.2f yýl eder",ay,(float)ay/12);
		}
	}
return 0;
}
