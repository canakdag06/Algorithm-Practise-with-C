#include<stdio.h>
#include<locale.h>

int main()
{
	int kisi;
	char tur;
	setlocale(LC_ALL, "Turkish");
	printf("Tur türünü giriniz (I/i: Þehiriçi, D/d: Þehirdýþý): ");
	scanf("%c",&tur);
	printf("Tura kaç kiþi katýlacak?: ");
	scanf("%d",&kisi);
	printf("--------------------------------------------------");
	
	int otobus = kisi/46;
		if(kisi%46 != 0)
		otobus = otobus+1;
	
	printf("\nBu tur için %d adet otobüse ihtiyaç var",otobus);
	printf("\nTurdaki boþ koltuk sayýsý: %d",otobus*46 - kisi);
	printf("\nTurun doluluk oraný : %.2f",(float)kisi/(otobus*46));
	
	if(tur == 'I' || tur == 'i')
	{
		if((float)kisi/(otobus*46)<0.6)
			printf("\nKarlýlýk derecesi : Zarar");
		else if((float)kisi/(otobus*46)>=0.6 && (float)kisi/(otobus*46)<0.9)
			printf("\nKarlýlýk derecesi : Karlý");
		else
			printf("\nKarlýlýk derecesi : Çok Karlý");
	return 0;
	}
	else if(tur == 'D' || tur == 'd')
	{
		if((float)kisi/(otobus*46)<0.7)
			printf("\nKarlýlýk derecesi : Zarar");
		else if((float)kisi/(otobus*46)>=0.7 && (float)kisi/(otobus*46)<0.9)
			printf("\nKarlýlýk derecesi : Karlý");
		else
			printf("\nKarlýlýk derecesi : Çok Karlý");
	return 0;
	}
}
