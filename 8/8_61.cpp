#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int buyuk,kucuk,b_normal=0,b_yuksek=0,b_dusuk=0,k_normal=0,k_yuksek=0,k_dusuk=0;
	printf("Tansiyon �l��m program�na ho� geldiniz...\n");
	printf("(Durdurmak i�in herhangi bir de�eri s�f�r giriniz)\n");
	printf("--------------------------------------------------\n");
	
	while(1)
	{
		printf("Tansiyon de�erlerini giriniz (B�y�k ve k���k) : ");
		scanf("%d %d",&buyuk,&kucuk);
		
			if(buyuk==0 || kucuk==0)
			break;
			
		if(buyuk>=120 && buyuk<=140)
		{
			printf("B�y�k normal, ");
			b_normal++;
		}
		else if(buyuk>140)
		{
			printf("B�y�k y�ksek, ");
			b_yuksek++;
		}
		else if(buyuk<120)
		{
			printf("B�y�k d���k, ");
			b_dusuk++;
		}
		
		if(kucuk>=70 && kucuk<=90)
		{
			printf("K���k normal.\n");
			k_normal++;
		}
		else if(kucuk>90)
		{
			printf("K���k y�ksek.\n");
			k_yuksek++;
		}
		else if(kucuk<70)
		{
			printf("K���k d���k.\n");
			k_dusuk++;
		}	
	}
	printf("--------------------------------------------------\n");
	printf("Program sona erdi\n");
	printf("B�y�k (Normal = %d, Y�ksek = %d, D���k = %d adet)\n",b_normal,b_yuksek,b_dusuk);
	printf("K���k (Normal = %d, Y�ksek = %d, D���k = %d adet)\n\ttansiyon de�eri girilmi�tir.",k_normal,k_yuksek,k_dusuk);
return 0;
}
