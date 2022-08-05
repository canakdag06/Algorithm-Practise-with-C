#include<stdio.h>

int main()
{
	float saat,borc;
	printf("Sureyi giriniz (saat) = ");
	scanf("%f",&saat);
	
	if(saat<0)
	{
		printf("HATA! Negatif deger giremezsiniz.");
		return 0;
	}

	printf("--------------------------");
	
	if(saat<1)
	borc = 5;
	else if(saat>=1 && saat<5)
	borc = 20;
	else if(saat>=5 && saat<10)
	borc = 40;
	else
	borc = 40 + (saat-10)*0.5;
	printf("\nBorcunuz : %.2f",borc);
	return 0;
}
