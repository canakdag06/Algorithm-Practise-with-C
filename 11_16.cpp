#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int boyut;
	float ortanca;
	printf("Eleman sayýsýný giriniz: ");
	scanf("%d",&boyut);
	int dizi[boyut];
	
	printf("Otomatik oluþturulan dizi: ");
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
	
	printf("\nDizinin sýralanmýþ hali: ");
	for(int i=0; i<boyut; i++)
		printf("%d, ", dizi[i]);
		
	if(boyut%2 == 1)
		ortanca = dizi[(boyut+1)/2 -1];
	if(boyut%2 == 0)
		ortanca = (dizi[boyut/2 -1]+dizi[(boyut+2)/2 -1])/2.0;
	printf("\nOrtanca= %.1f", ortanca);
}
