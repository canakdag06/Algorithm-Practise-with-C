#include<stdio.h>
#include<locale.h>

float interQuartile(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int boyut;
	int dizi[boyut];
	do
	{
	printf("Eleman sayýsýný giriniz (En fazla 500): ");
	scanf("%d",&boyut);
		if(boyut<=0 || boyut>500)
		printf("Geçersiz eleman sayýsý girdiniz!\n");
	}
	while(boyut<=0 || boyut>500);
	printf("Dizinin elemanlarýný giriniz (%d adet): ", boyut);
	for(int i=0; i<boyut ; i++)
		scanf("%d",&dizi[i]);
	
	
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
	
	printf("Dizinin çeyrekler arasý ortalamasý : %.1f",(interQuartile(dizi, boyut)));
	return 0;
}

float interQuartile(int dizi[], int boyut)
{
	int ceyrek = boyut/4;
	float ort = 0.0;
	
	for(int i=ceyrek; i<boyut-ceyrek ; i++)
		ort += dizi[i];
	
	return ort/(boyut-ceyrek*2.0);
}
