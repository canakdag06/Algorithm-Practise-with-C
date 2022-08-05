#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int buyuk,kucuk,b_normal=0,b_yuksek=0,b_dusuk=0,k_normal=0,k_yuksek=0,k_dusuk=0;
	printf("Tansiyon ölçüm programýna hoþ geldiniz...\n");
	printf("(Durdurmak için herhangi bir deðeri sýfýr giriniz)\n");
	printf("--------------------------------------------------\n");
	
	while(1)
	{
		printf("Tansiyon deðerlerini giriniz (Büyük ve küçük) : ");
		scanf("%d %d",&buyuk,&kucuk);
		
			if(buyuk==0 || kucuk==0)
			break;
			
		if(buyuk>=120 && buyuk<=140)
		{
			printf("Büyük normal, ");
			b_normal++;
		}
		else if(buyuk>140)
		{
			printf("Büyük yüksek, ");
			b_yuksek++;
		}
		else if(buyuk<120)
		{
			printf("Büyük düþük, ");
			b_dusuk++;
		}
		
		if(kucuk>=70 && kucuk<=90)
		{
			printf("Küçük normal.\n");
			k_normal++;
		}
		else if(kucuk>90)
		{
			printf("Küçük yüksek.\n");
			k_yuksek++;
		}
		else if(kucuk<70)
		{
			printf("Küçük düþük.\n");
			k_dusuk++;
		}	
	}
	printf("--------------------------------------------------\n");
	printf("Program sona erdi\n");
	printf("Büyük (Normal = %d, Yüksek = %d, Düþük = %d adet)\n",b_normal,b_yuksek,b_dusuk);
	printf("Küçük (Normal = %d, Yüksek = %d, Düþük = %d adet)\n\ttansiyon deðeri girilmiþtir.",k_normal,k_yuksek,k_dusuk);
return 0;
}
