#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int boyut;
	printf("Eleman say�s�n� giriniz: ");
	scanf("%d",&boyut);
	int dizi[boyut];
	
	printf("Otomatik olu�turulan dizi: ");
	for(int i=0; i<boyut; i++)
	{
		dizi[i] = rand()%100 +1;
		printf("%d, ", dizi[i]);
	}
	
	//bubble sort
	int gecici;
    for(int i=0; i<(boyut-1); i++)
	{
    	for(int j=0; j<boyut-i-1; j++)
		{
            if (dizi[j] > dizi[j+1])
			{
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
		}
	}
	
	printf("\nDizinin s�ralanm�� hali: ");
	for(int i=0; i<boyut; i++)
		printf("%d, ", dizi[i]);
	int ilkceyrek = (boyut+1)/4;
	printf("\n�lk �eyrek de�eri(%d. s�radaki): %d", ilkceyrek, dizi[ilkceyrek-1]);
	return 0;
}
