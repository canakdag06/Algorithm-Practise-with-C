#include<stdio.h>

int main()
{
	int saat,dakika,saniye,ek;
	printf("Zamani giriniz (saat, dakika, saniye)= ");
	scanf("%d %d %d",&saat,&dakika,&saniye);
	
	if(saat<0 || dakika<0 || saniye<0)
		{
		printf("HATA! Negatif deger girdiniz.");
		return 0;	
		}
	
	printf("Eklenecek sureyi giriniz (saniye) = ");
	scanf("%d",&ek);
	saniye = saniye + ek;
	dakika = dakika + saniye/60;
	saniye = saniye%60;
	saat   = saat + dakika/60;
	dakika = dakika%60;
	printf("-------------------");
	printf("\nYeni zaman = %.2d:%.2d:%.2d",saat,dakika,saniye);
	
}
