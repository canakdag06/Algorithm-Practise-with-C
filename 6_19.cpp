#include<stdio.h>

int main()
{
	float oran;
	float toplam;
	printf("KDV dahil toplam tutari giriniz(TL) : ");
	scanf("%f",&toplam);
	printf("KDV oranini giriniz : %");
	scanf("%f",&oran);
	float ham= toplam/((oran/100.0)+1);
	printf("\nHesaplanan KDV miktari : %.2f",toplam-ham);
	printf("\nKDV Haric Mal Hizmet Bedeli : %.2f",ham);
}
