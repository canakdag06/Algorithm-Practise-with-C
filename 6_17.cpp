#include<stdio.h>

int main()
{
	int sure,saat,dakika,saniye;
	printf("Sureyi saniye olarak giriniz ->");
	scanf("%d",&sure);
	saat = sure/3600;
	dakika = sure%60;
	saniye = sure%60;
	printf("Bu sure %d saat, %d dakika, %d saniye eder.",saat,dakika,saniye);
}
