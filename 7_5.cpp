#include<stdio.h>

int main()
{
	int yas;
	float boy, kilo, endeks;
	printf("Yasinizi giriniz: ");
	scanf("%d",&yas);
	printf("Kilonuzu giriniz (kg): ");
	scanf("%f",&kilo);
	printf("Boyunuzu giriniz (m): ");
	scanf("%f",&boy);
	
	if(yas||kilo||boy<=0)
	{
		printf("HATA! Degerler negatif veya sifir olamaz.");
		return 0;
	}
	
	endeks= kilo/(boy*boy);
		printf("Vucut kitle endeksiniz: %.2f", endeks);
	if(yas>=13 && yas<=17 && endeks>=18.5 && endeks<=24.99)
		printf("\nTebrikler! Askeri liseye girebilirsiniz.");
	else
		printf("\nMaalesef askeri liseye giremezsiniz.");
	return 0;
}
