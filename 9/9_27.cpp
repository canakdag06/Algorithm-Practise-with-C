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
			printf("Hi� be�enmedim!\nSiyah renge boyay�n\n"); break;
		case 1:
			printf("Hi� be�enmedim!\nKahverengine boyay�n\n"); break;
		case 2:
			printf("Hi� be�enmedim!\nK�rm�z� renge boyay�n\n"); break;
		case 3:
			printf("Hi� be�enmedim!\nTuruncu renge boyay�n\n"); break;
		case 4:
			printf("Hi� be�enmedim!\nSar� renge boyay�n\n"); break;
		case 5:
			printf("Hi� be�enmedim!\nYe�il renge boyay�n\n"); break;
		case 6:
			printf("Hi� be�enmedim!\nMavi renge boyay�n\n"); break;
		case 7:
			printf("Hi� be�enmedim!\nMor renge boyay�n\n"); break;
		case 8:
			printf("Hi� be�enmedim!\nGri renge boyay�n\n"); break;
		case 9:
			printf("Hi� be�enmedim!\nBeyaz renge boyay�n\n"); break;
	}
}
