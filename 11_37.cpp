#include<stdio.h>
#include<locale.h>

void deneyimliAcemiAyirarakYaz(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int boyut;
	
	printf("Memur sayýsýný giriniz : ");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	printf("%d adet memurun sicil numaralarýný giriniz:\n",boyut);
	for(int i=0; i<boyut; i++)
	{
		scanf("%d",&dizi[i]);
	}
	printf("--------------------------------\n");
	deneyimliAcemiAyirarakYaz(dizi, boyut);
	return 0;
}

void deneyimliAcemiAyirarakYaz(int dizi[], int boyut)
{
	int deneyimli[boyut], acemi[boyut];
	int d=0, a=0;
	for(int i=0; i<boyut; i++)	// teklerin çiftlerin bulunmasý
	{
		if(dizi[i]%2 == 1)
		{
			deneyimli[d] = dizi[i];
			d++;
		}
		else
		{
			acemi[a] = dizi[i];
			a++;
		}
	}
	
	printf("Acemi memurlarýn sicil numaralarý : ");
	for(int i=0; i<a; i++)
		printf("%d, ",acemi[i]);
		
	printf("\nDeneyimli memurlarýn sicil numaralarý : ");
	for(int i=0; i<d; i++)
		printf("%d, ",deneyimli[i]);
	
	printf("\nNöbet Listeleri:\n");
	for(int i=0; i<d; i++)
	{
		for(int j=0; j<a; j++)
		{
			printf("%d-%d\n",deneyimli[i],acemi[j]);
		}
	}
}
