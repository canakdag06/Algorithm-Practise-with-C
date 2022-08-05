#include<stdio.h>
#include<locale.h>

float cevirTL(float,float,float,float);

int main()
{
	setlocale(LC_ALL, "Turkish");
	float lira1,kurus50,kurus25,kurus10;
	printf("Bozuklukların ağırlıklarını sırasıyla kg cinsinden giriniz\n");
	printf("(Sırasıyla 1TL, 50 kuruş, 25 kuruş, 10 kuruş):\n");
	scanf("%f %f %f %f",&lira1,&kurus50,&kurus25,&kurus10);
	printf("-----------------------------------------------------------\n");
	printf("Bozuklukların toplam ederi = %.2f",cevirTL(lira1*1000,kurus50*1000,kurus25*1000,kurus10*1000));
return 0;
}

float cevirTL(float lira1, float kurus50, float kurus25, float kurus10)
{
	return (lira1/8.2) + (kurus50/6.8)*0.5 + (kurus25/4)*0.25 + (kurus10/3.15)*0.1;
}
