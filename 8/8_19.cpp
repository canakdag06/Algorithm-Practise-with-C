#include<stdio.h>
#include<locale.h>

int main()
{
	int kisi, yas, i;
	float toplam;
	setlocale(LC_ALL, "Turkish");
	printf("Ailedeki birey sayýsý kaç?: ");
	scanf("%d",&kisi);
	printf("%d kiþinin yaþlarýný giriniz:\n",kisi);
	
		for(i=1;i<=kisi;i++)
		{
			scanf("%d",&yas);
			
			if(yas<0 || yas>100)
			{
				printf("HATA! Geçerli bir yaþ girmediniz.");
			return 0;
			}
			if(yas>=1 && yas<=10)
			toplam = toplam+1;
			else if(yas>=11 && yas<=17)
			toplam = toplam+1.5;
			else if(yas>=18 && yas<=26)
			toplam = toplam+4.75;
			else if(yas>=27 && yas<=50)
			toplam = toplam+7;
			else if(yas>=51)
			toplam = toplam+5.25;
		}
	printf("Ödenecek toplam ücret %.2f TL",toplam);
return 0;
}
