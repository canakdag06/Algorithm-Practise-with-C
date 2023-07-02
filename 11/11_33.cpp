#include<stdio.h>
#include<locale.h>

int hamming(int[], int[], int, int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi1[10], dizi2[10], i;
	
	printf("Birinci dizi elemanlarýný giriniz: ");
	for(i=0; i<10; i++)
		scanf("%d", &dizi1[i]);
		
	printf("Ýkinci dizi elemanlarýný giriniz: ");
	for(i=0; i<10; i++)
		scanf("%d", &dizi2[i]);
	
	printf("Ýki dizi arasýndaki Hamming uzaklýðý: %d", hamming(dizi1,dizi2,10,10));
	return 0;
}

int hamming(int dizi1[], int dizi2[], int boyut1, int boyut2)
{
	int x = 0;
	for(int i=0; i<boyut1; i++)
	{
		if(dizi1[i] != dizi2[i])
			x++;
	}
	return x;
}
