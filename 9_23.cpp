#include<stdio.h>
void ayristir(int);

int main()
{
	ayristir(7200);
return 0;
}

void ayristir(int sure)
{
	int saat = sure/3600;
		if(saat != 0)
		printf("%d saat ",saat);
	int dakika = (sure-(saat*3600))/60;
		if(dakika != 0)
		printf("%d dakika ",dakika);
	int saniye = sure-(saat*3600)-(dakika*60);
		if(saniye != 0)
		printf("%d saniye",saniye);
}
