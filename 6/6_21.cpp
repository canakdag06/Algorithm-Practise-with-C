#include<stdio.h>
int main()
{
	int saat, dakika, saniye;
	printf("Zamani giriniz (saat, dakika, saniye): ");
	scanf("%d %d %d",&saat,&dakika,&saniye);
	
	if(saat||dakika||saniye < 0)
	{
		printf("HATA! Negatif sayi girdiniz.");
		return 0;
	}
	int sonuc = saat*3600 + dakika*60 + saniye;
	printf("---------------------");
	printf("\nBu sure %d saniye eder",sonuc);
}
