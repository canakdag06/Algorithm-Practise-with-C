#include<stdio.h>
#include<locale.h>

int main()
{
	int kisi;
	char tur;
	setlocale(LC_ALL, "Turkish");
	printf("Tur t�r�n� giriniz (I/i: �ehiri�i, D/d: �ehird���): ");
	scanf("%c",&tur);
	printf("Tura ka� ki�i kat�lacak?: ");
	scanf("%d",&kisi);
	printf("--------------------------------------------------");
	
	int otobus = kisi/46;
		if(kisi%46 != 0)
		otobus = otobus+1;
	
	printf("\nBu tur i�in %d adet otob�se ihtiya� var",otobus);
	printf("\nTurdaki bo� koltuk say�s�: %d",otobus*46 - kisi);
	printf("\nTurun doluluk oran� : %.2f",(float)kisi/(otobus*46));
	
	if(tur == 'I' || tur == 'i')
	{
		if((float)kisi/(otobus*46)<0.6)
			printf("\nKarl�l�k derecesi : Zarar");
		else if((float)kisi/(otobus*46)>=0.6 && (float)kisi/(otobus*46)<0.9)
			printf("\nKarl�l�k derecesi : Karl�");
		else
			printf("\nKarl�l�k derecesi : �ok Karl�");
	return 0;
	}
	else if(tur == 'D' || tur == 'd')
	{
		if((float)kisi/(otobus*46)<0.7)
			printf("\nKarl�l�k derecesi : Zarar");
		else if((float)kisi/(otobus*46)>=0.7 && (float)kisi/(otobus*46)<0.9)
			printf("\nKarl�l�k derecesi : Karl�");
		else
			printf("\nKarl�l�k derecesi : �ok Karl�");
	return 0;
	}
}
