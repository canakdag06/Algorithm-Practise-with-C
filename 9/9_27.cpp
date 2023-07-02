#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void renkMesajiYaz(int);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	renkMesajiYaz(0);
	printf("\n");
	renkMesajiYaz(2);
return 0;
}

void renkMesajiYaz(int renk)
{
	int degistir = rand()%10;
	do
	{
		degistir = rand()%10;
	}
	while(renk == degistir);
	
	switch(degistir)
	{
		case 0:
			printf("Hiç beðenmedim!\nSiyah renge boyayýn\n"); break;
		case 1:
			printf("Hiç beðenmedim!\nKahverengine boyayýn\n"); break;
		case 2:
			printf("Hiç beðenmedim!\nKýrmýzý renge boyayýn\n"); break;
		case 3:
			printf("Hiç beðenmedim!\nTuruncu renge boyayýn\n"); break;
		case 4:
			printf("Hiç beðenmedim!\nSarý renge boyayýn\n"); break;
		case 5:
			printf("Hiç beðenmedim!\nYeþil renge boyayýn\n"); break;
		case 6:
			printf("Hiç beðenmedim!\nMavi renge boyayýn\n"); break;
		case 7:
			printf("Hiç beðenmedim!\nMor renge boyayýn\n"); break;
		case 8:
			printf("Hiç beðenmedim!\nGri renge boyayýn\n"); break;
		case 9:
			printf("Hiç beðenmedim!\nBeyaz renge boyayýn\n"); break;
	}
}
