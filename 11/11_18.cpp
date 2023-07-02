#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));
	
	int boyut;
	printf("Eleman sayýsýný giriniz: ");
	scanf("%d",&boyut);
	int dizi[boyut], eskidizi[boyut];
	
	printf("Otomatik oluþturulan dizi: ");
	for(int i=0; i<boyut; i++)
	{
		dizi[i] = rand()%100 +1;
		eskidizi[i] = dizi[i];
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
	
	int gecis = 0;
	printf("\nDizinin sýralanmýþ hali: ");
	for(int i=0; i<boyut; i++)
	{
		if(eskidizi[i] != dizi[i])
			gecis++;
		printf("%d, ", dizi[i]);
	}
	printf("\nYeri deðiþmeyenlerin sayýsý : %d", boyut-gecis);
	return 0;
}
