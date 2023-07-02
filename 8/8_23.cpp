#include<stdio.h>
#include<locale.h>

int main()
{
	int x, sayi, check, toplam=0;
	setlocale(LC_ALL,"Turkish");
	start:
	printf("Kaç adet sayý gireceksiniz?: ");
	scanf("%d",&x);
	
	if(x <=0)
	{
	printf("HATA! Adet sýfýr ya da negatif olamaz.\n");
	goto start;
	}
	printf("%d adet sayý giriniz : ",x);
	
	for(int i=1;i<=x;i++)
	{
		scanf("%d",&sayi);
		if(sayi%8==0 || sayi%13==0)
		{
			check++;
			toplam = toplam + sayi;
		}
	}
	printf("--------------------------------------");
	printf("\nKurala uyan toplam %d sayý girdiniz\nToplamlarý = %d",check,toplam);
}
