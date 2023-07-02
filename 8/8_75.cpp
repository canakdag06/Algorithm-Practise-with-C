#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int birinci,ikinci,toplam=0,kule=1;
	
	printf("Ýki adet sýfýr büyük tamsayý giriniz: ");
	scanf("%d %d",&birinci,&ikinci);
	while(birinci<1 || ikinci<1)
	{
		printf("Hata!! Sayýlar sýfýrdan büyük olmalý\n");
		printf("Ýki adet sýfýr büyük tamsayý giriniz: ");
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
	printf("Çarpým kulesi ile hesaplanan sonuç = %d\n", toplam);
	printf("Kule yüksekliði = %d",kule);
return 0;
}
