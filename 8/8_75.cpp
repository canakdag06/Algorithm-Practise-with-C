#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int birinci,ikinci,toplam=0,kule=1;
	
	printf("�ki adet s�f�r b�y�k tamsay� giriniz: ");
	scanf("%d %d",&birinci,&ikinci);
	while(birinci<1 || ikinci<1)
	{
		printf("Hata!! Say�lar s�f�rdan b�y�k olmal�\n");
		printf("�ki adet s�f�r b�y�k tamsay� giriniz: ");
		scanf("%d %d",&birinci,&ikinci);
	}

	while(1)
	{
			if(birinci%2 == 1)
			{
				toplam += ikinci;
			}
		birinci = birinci/2;
		ikinci = ikinci*2;
		kule++;
			if(birinci==1)
			{
				toplam += ikinci;
				break;
			}
	}
	
	printf("---------------------------------------------\n");
	printf("�arp�m kulesi ile hesaplanan sonu� = %d\n", toplam);
	printf("Kule y�ksekli�i = %d",kule);
return 0;
}
