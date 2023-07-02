#include<stdio.h>
#include<locale.h>

void rotate(int[],int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int dizi[10];
	int cevir, boyut=10;
	printf("Dizinin elemanlarýný giriniz:");
	for(int i=0; i<10; i++)
	{
		scanf("%d",&dizi[i]);
	}
	
	printf("Döndürme miktarýný giriniz  :");
	scanf("%d",&cevir);
	printf("--------------------------------");
	rotate(dizi,boyut,cevir);
	return 0;
}

void rotate(int dizi[], int boyut, int cevir)
{
	int temp;
	
	for(int i=0; i<cevir; i++)
	{
		temp = dizi[0];
		for(int j=1; j<boyut; j++)
		{
			dizi[j-1] = dizi[j];
		}
		dizi[boyut-1] = temp;
	}
	
	printf("\nDizinin son hali = ");
	for(int i=0; i<boyut ; i++)
	{
		printf("%d ", dizi[i]);
	}
}
