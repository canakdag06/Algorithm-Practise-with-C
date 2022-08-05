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
	printf("\n");
	ertelemeMesajiYaz(6);
return 0;
}

void ertelemeMesajiYaz(int gun)
{
	int degistir = 1+rand()%7;
	do
	{
		degistir = 1+rand()%7;
	}
	while(gun == degistir);
	
	switch(degistir)
	{
		case 1:
			printf("Pazar günü teslimat yapýlacak"); break;
		case 2:
			printf("Pazartesi günü teslimat yapýlacak"); break;
		case 3:
			printf("Salý günü teslimat yapýlacak"); break;
		case 4:
			printf("Çarþamba günü teslimat yapýlacak"); break;
		case 5:
			printf("Perþembe günü teslimat yapýlacak"); break;
		case 6:
			printf("Cuma günü teslimat yapýlacak"); break;
		case 7:
			printf("Cumartesi günü teslimat yapýlacak"); break;
	}
}
