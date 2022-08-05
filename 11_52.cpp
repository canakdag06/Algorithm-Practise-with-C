#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	
	printf("Eleman sayýsýný giriniz : ");
	scanf("%d",&boyut);
	while(boyut>50)
	{
		printf("En fazla 50 eleman girebilirsiniz.\n");
		printf("Tekrar girin: ");
		scanf("%d",&boyut);
	}
	int kodlar[boyut];
	int sayilar[boyut];
	
	for(int i=0; i<boyut; i++)
	{
		printf("%d. eþyanýn kodu ve sayýsý : ",i+1);
		scanf("%d %d",&kodlar[i],&sayilar[i]);
	}
	printf("---------------------------------------\n");
	printf("Eþyalar Sýralý\n");
	
	int gecici;
    for(int i=0; i<(boyut-1); i++)
	{
    	for(int j=0; j<boyut-i-1; j++)
		{
            if (sayilar[j] < sayilar[j+1])
			{
                gecici = sayilar[j];
                sayilar[j] = sayilar[j+1];
                sayilar[j+1] = gecici;
                gecici = kodlar[j];
                kodlar[j] = kodlar[j+1];
                kodlar[j+1] = gecici;
            }
		}
	}
	
	printf("Kodlar : ");
	for(int i=0; i<boyut; i++)
		printf("%d   ",kodlar[i]);
	
	printf("\nSayýlarý : ");
	for(int i=0; i<boyut; i++)
		printf("%d   ",sayilar[i]);
		
	return 0;
}
