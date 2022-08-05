#include<stdio.h>

int main()
{
	char secim;
	float para;
	printf("****URUN SECENEKLERI****");
	printf("\nTransistor (T/t)");
	printf("\nDirenc (D/d)");
	printf("\nKondansator (K/k)");
	printf("\n************************");
	printf("\nSeciminizi giriniz : ");
	scanf("%c",&secim);
	
	if(secim == 'T' || secim == 't')
	{
		printf("Ne kadarlik transistor alacaksiniz? : ");
		scanf("%f",&para);
		if(para >1000)
		para = para*0.9;
		printf("Odeme = %.1f",para);
		return 0;
	}
	else if(secim == 'D' || secim == 'd')
	{
		printf("Ne kadarlik direnc alacaksiniz? : ");
		scanf("%f",&para);
		if(para > 100)
		para = para*0.95;
		printf("Odeme = %.1f",para);
		return 0;
	}
	else if(secim == 'K' || secim == 'k')
	{
		printf("Ne kadarlik kondansator alacaksiniz? : ");
		scanf("%f",&para);
		if(para > 500)
		para = para*0.92;
		printf("Odeme = %.1f",para);
		return 0;
	}
	else
	printf("HATA! Yanlis harf kodu girmis olabilirsiniz.");
	return 0;
}
