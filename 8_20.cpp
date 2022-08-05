#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int kod, kirmizi, yesil, sari, siyah;
	while(1)
	{
		printf("Kod giriniz (1,2,3,4 ya da çýkmak için 111) : ");
		scanf("%d",&kod);
		
		switch(kod)
		{
			case 1: kirmizi++; break;
			case 2: yesil++; break;
			case 3: sari++; break;
			case 4: siyah++; break;
			case 111: goto sonuc; break;
			default: printf("HATA! Lütfen geçerli bir kod giriniz.\n"); break;
		}
	}
	sonuc:
	printf("Gün Sonu Satýþ Raporu:\n");
	printf("%d kýrmýzý, %d yeþil, %d sarý, %d siyah oje satýlmýþtýr.",kirmizi,yesil,sari,siyah);
return 0;
}
