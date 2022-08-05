#include<stdio.h>

int main()
{
	float brut,yillik;
	printf("Brut aylik gelirinizi giriniz : ");
	scanf("%f",&brut);

	yillik = brut*12.0;
	printf("----------------------------------");

	if(brut<0)
	{
		printf("\nHATA! Negatif deger girdiniz.");
		return 0;
	}

	printf("\nToplam yillik geliriniz : %.2f",yillik);
	
	if(yillik<=10700)
	{
	printf("\nOdemeniz gereken toplam vergi : %.2f",yillik*0.15);
	printf("\nHer ay gelirinizden kesilecek vergi : %.2f",brut*0.15);
	printf("\nVergisi kesilmis net aylik geliriniz : %.2f",brut-brut*0.15);
	}
	else if(yillik>10700 && yillik<=26000)
	{
	printf("\nOdemeniz gereken toplam vergi : %.2f",1605+(yillik-10700)*0.2);
	printf("\nHer ay gelirinizden kesilecek vergi : %.2f",(1605+(yillik-10700)*0.2)/12);
	printf("\nVergisi kesilmis net aylik geliriniz : %.2f",brut-(1605+(yillik-10700)*0.2)/12);
	}
	else if(yillik>26000 && yillik<=94000)
	{
	printf("\nOdemeniz gereken toplam vergi : %.2f",4665+(yillik-26000)*0.27);
	printf("\nHer ay gelirinizden kesilecek vergi : %.2f",(4665+(yillik-26000)*0.27)/12);
	printf("\nVergisi kesilmis net aylik geliriniz : %.2f",brut-(4665+(yillik-26000)*0.27)/12);
	}
	else
	{
	printf("\nOdemeniz gereken toplam vergi : %.2f",yillik*0.35);
	printf("\nHer ay gelirinizden kesilecek vergi : %.2f",brut*0.35);
	printf("\nVergisi kesilmis net aylik geliriniz : %.2f",brut-brut*0.35);
	}
	return 0;
}
