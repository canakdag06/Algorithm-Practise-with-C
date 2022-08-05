#include<stdio.h>
#include<locale.h>

int ortKucukBul(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[10];
	
	printf("a dizisinin elemanlarýný giriniz: ");
	for(int i=0; i<10; i++)
	{
		scanf("%d", &dizi[i]);
	}
	
	ortKucukBul(dizi, 10);
	return 0;
}

int ortKucukBul(int dizi[], int boyut)
{	
	float ortalama = 0.0;
	for(int i=0; i<boyut; i++)
	{
		ortalama += dizi[i];
	}
	ortalama = ortalama/boyut;
	printf("Dizinin ortalamasý %.2f dir", ortalama);
	printf("\nOrtalamadan küçük olanlar: ");
	for(int i=0; i<boyut; i++)
	{
		if(dizi[i] < ortalama)
			printf("%d ", dizi[i]);
	}
}
