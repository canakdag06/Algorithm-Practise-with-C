#include<stdio.h>

int main()
{
	float ic,dis;
	printf("Aracin sehir ici yakit tuketim miktarini giriniz : ");
	scanf("%f",&ic);
	printf("Aracin sehir disi yakit tuketim miktarini giriniz : ");
	scanf("%f",&dis);
	printf("----------------------------------------------------");
	
	if(ic<0 || dis<0)
	{
	printf("\nHATA! Negatif deger girdiniz.");
	return 0;
	}
	
	float ort = ic*0.55 + dis*0.45;
	printf("\nOrtalama yakit tuketimi= %.2f",ort);
	
	if(ort<3)
	printf("\nYakit tuketim sinifi = Cok az");
	else if(ort>=3 && ort<6)
	printf("\nYakit tuketim sinifi = Ekonomik");
	else if(ort>=6 && ort<8)
	printf("\nYakit tuketim sinifi = Fazla");
	else
	printf("\nYakit tuketim sinifi = Cok fazla");
}
