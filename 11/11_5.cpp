#include<stdio.h>
#include<locale.h>

int en_kucuk_bul(int[], int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[10];
	int minimum;
	
	printf("Dizinin elemanlarýný giriniz: ");
	for(int n=0; n<10; n++)
	{
		scanf("%d", &dizi[n]);
	}
	minimum = en_kucuk_bul(dizi, 10);
	printf("Dizinin en küçük elemaný = %d", minimum);
	return 0;
}

int en_kucuk_bul(int m[], int s)
{
	int enKucuk = m[0];
	
	for(int i=1; i<s; i++)
	{
		if(m[i] < enKucuk)
			enKucuk = m[i];
	}
	return enKucuk;
}
