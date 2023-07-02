#include<stdio.h>

int main()
{
	int saat;
	printf("Gunun saatini giriniz: ");
	scanf("%d",&saat);
	printf("-----------------------");
	
	if(saat<0)
	printf("\nHATA! Uygun bir deger girmediniz");
	else if(saat<6)
	printf("\nIyi uykular");
	else if(saat>=6 && saat<11)
	printf("\nGunaydin");
	else if(saat>=11 && saat<17)
	printf("\nIyi gunler");
	else if(saat>=17 && saat<22)
	printf("\nIyi aksamlar");
	else if(saat>=22 && saat<24)
	printf("\nIyi geceler");
	else
	printf("\nIyi uykular");
	return 0;
}
