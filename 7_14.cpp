#include<stdio.h>

int main()
{
	float x;
	printf("Righter cinsinden deprem buyuklugunu giriniz: ");
	scanf("%f",&x);
	printf("----------------------------------------------");
	
	if(x<0)
	printf("\nHATA! Negatif sayi giremezsiniz");
	else if(x<5.0)
	printf("\nUfak veya hasarsiz");
	else if(x>=5.0 && x<5.5)
	printf("\nAz hasarli");
	else if(x>=5.5 && x<6.5)
	printf("\nCiddi hasar: Catlamalar ve cokmeler olabilir");
	else if(x>=6.5 && x<7.5)
	printf("\nFelaket: Evler ve binalar cokebilir");
	else
	printf("\nFacia: Butun yapilar yok olur");
	return 0;
}
