#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void ertelemeMesajiYaz(int);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	ertelemeMesajiYaz(1);
	ertelemeMesajiYaz(7);
return 0;
}

void ertelemeMesajiYaz(int ay)
{
	int mevsim;
	int ertele = 1+rand()%4;
	
	switch(ay)
	{
		case 12:
		case 1:
		case 2:
			mevsim = 1; break;  // KI�
		case 3:
		case 4:
		case 5:
			mevsim = 2; break; //�LKBAHAR
		case 6:
		case 7:
		case 8:
			mevsim = 3; break; // YAZ
		case 9:
		case 10:
		case 11:
			mevsim = 4; break; // SONBAHAR
	}
	
	do
	{
		ertele = 1+rand()%4;
	}
	while(mevsim == ertele);
	
	switch(ertele)
	{
		case 1:
			printf("K���n tatile gidece�iz.\n"); break;
		case 2:
			printf("�lkbaharda tatile gidece�iz.\n"); break;
		case 3:
			printf("Yaz�n tatile gidece�iz.\n"); break;
		case 4:
			printf("Sonbaharda tatile gidece�iz.\n"); break;
	}
}
