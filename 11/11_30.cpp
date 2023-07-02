#include<stdio.h>
#include<locale.h>

void tamamla(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[20];
	printf("20 kiþilik sýnýfýn notlarýný giriniz: ");
	for(int i=0; i<20; i++)
		scanf("%d",&dizi[i]);
	
	tamamla(dizi, 20);
	return 0;
}

void tamamla(int dizi[], int boyut)
{
	int max = 0;
	for(int i=0; i<boyut; i++)
	{
		if(dizi[i] > max)
			max = dizi[i];
	}
	printf("Düzenlenmiþ notlar:\n");
	for(int i=0; i<boyut; i++)
	{
		dizi[i] = dizi[i] + dizi[i]*(100-max)/max;
		printf("%d ",dizi[i]);
	}
}
