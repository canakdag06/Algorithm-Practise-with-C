#include<stdio.h>

int main()
{
	char secim;
	printf("-----------MENU----------");
	printf("\nDaire icin D veya d");
	printf("\nDikdortgen icin T veya t");
	printf("\nKare icin K veya k");
	printf("\nUcgen icin U veya u");
	printf("\n------------------------");
	printf("\nSeciminiz= ");
	scanf("%c",&secim);
	printf("---------------------------");
	
	if(secim == 'D' || secim == 'd')
	{
		float r;
		printf("\nDairenin capini giriniz = ");
		scanf("%f",&r);
		float alan = 3.14*r*r;
		printf("Capi %.2f olan dairenin alani= %.2f birimkare",r,alan);
		return 0;
	}
	else if(secim == 'T' || secim == 't')
	{
		float dik_1,dik_2;
		printf("\nDikdortgenin iki kenar uzunlugunu giriniz= ");
		scanf("%f %f",&dik_1,&dik_2);
		float alan = dik_1*dik_2;
		printf("Kenarlari %.2f ve %.2f olan dikdortgenin alani= %.2f birimkare",dik_1,dik_2,alan);
		return 0;
	}
	else if(secim == 'K' || secim == 'k')
	{
		float x;
		printf("\nKarenin tek kenar uzunlugunu giriniz= ");
		scanf("%f",&x);
		float alan = x*x;
		printf("Kenarlari %.2f olan karenin alani= %.2f birimkare",x,alan);
		return 0;
	}
	else if(secim == 'U' || secim == 'u')
	{
		float a,h;
		printf("\nUcgenin taban kenar uzunlugunu ve yuksekligini giriniz= ");
		scanf("%f %f",&a,&h);
		float alan = a*h/2;
		printf("Taban kenari %.2f ve yuksekligi %.2f olan ucgenin alani= %.2f birimkare",a,h,alan);
		return 0;
	}
	else
		printf("\nHATA! Yanlis harf girmis olabilirsiniz.");
	return 0;
}
