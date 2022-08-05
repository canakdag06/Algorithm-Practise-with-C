#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

int enCokVurulanHalka(int[],int);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	int dizi[11] = {0,0,0,0,0,0,0,0,0,0,0};
	int tekrar;
	
	printf("Toplam kaç atýþ yapýlsýn ? : ");
	scanf("%d", &tekrar);
	printf("--------------------------------\n");
	printf("%d numaralý halkadýr\n",enCokVurulanHalka(dizi,tekrar));
	printf("Hedef %d defa ýskalanmýþtýr",dizi[0]);
	return 0;
}

int enCokVurulanHalka(int dizi[], int tekrar)
{
	int atis, max=0, index;
	for(int i=0; i<tekrar; i++)
	{
		atis = rand()%11;
		printf("%d. atýþýnýzýn rastgele vurduðu halka : %d\n", i+1, atis);
		dizi[atis]++;
		if(max < dizi[atis])
		{
			max = dizi[atis];
			index = atis;
		}
	}
	printf("En çok vurulan halka ");
	return index;
}


