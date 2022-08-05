#include<stdio.h>

int main()
{
	int para;
	printf("Lutfen odenecek toplam tutari giriniz ->");
	scanf("%d",&para);
		float kdv = (para*15)/100;
		float gaz = (para-kdv)/0.3047;
	printf("\nOdenen toplam tutar = %d",para);
	printf("\nHesaplanan KDV = %.2f",kdv);
	printf("\nGaz Bedeli= %.2f",para-kdv);
	printf("\nGaz Miktari= %.3f m3",gaz);
}
