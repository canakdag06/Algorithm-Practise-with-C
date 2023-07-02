#include<stdio.h>

int main()
{
	int erkek_1 = 'e';
	int erkek_2 = 'E';
	int kiz_1 = 'k';
	int kiz_2 = 'K';
	float ideal, boy, kilo;
	int cinsiyet;
	printf("Cinsiyetinizi giriniz (e-E/k-K): ");
	scanf("%c",&cinsiyet);
	
		if(cinsiyet!=erkek_1 && cinsiyet!=erkek_2 && cinsiyet!=kiz_1 && cinsiyet!=kiz_2)
	{
		printf("HATA! Mevcut cinsiyet harflerinden baska bir harf girdiniz.");
		return 0;
	}
	
	printf("Boyunuz(m): ");
	scanf("%f",&boy);
	printf("Kilonuz(kg): ");
	scanf("%f",&kilo);
	printf("-----------------------------------");
	
	if(cinsiyet== erkek_1 || cinsiyet== erkek_2)
	{
		ideal = 48 + (boy-1.5)*101;
		printf("\nIdeal kilonuz : %.2f",ideal);
		if(kilo>ideal)
		printf("\nIdeal kilonuzdan daha agirsiniz");
		if(kilo==ideal)
		printf("\nIdeal kilonuzdasiniz");
		if(kilo<ideal)
		printf("\nIdeal kilonuzdan daha hafifsiniz");
	return 0;
	}
	
	if(cinsiyet== kiz_1 || cinsiyet== kiz_2)
	{
		ideal = 45 + (boy-1.5)*88;
		printf("\nIdeal kilonuz : %.2f",ideal);
		if(kilo>ideal)
		printf("\nIdeal kilonuzdan daha agirsiniz");
		if(kilo==ideal)
		printf("\nIdeal kilonuzdasiniz");
		if(kilo<ideal)
		printf("\nIdeal kilonuzdan daha hafifsiniz");
	return 0;
	}
}
