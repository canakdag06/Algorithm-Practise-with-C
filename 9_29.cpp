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
			printf("Pazar g�n� teslimat yap�lacak"); break;
		case 2:
			printf("Pazartesi g�n� teslimat yap�lacak"); break;
		case 3:
			printf("Sal� g�n� teslimat yap�lacak"); break;
		case 4:
			printf("�ar�amba g�n� teslimat yap�lacak"); break;
		case 5:
			printf("Per�embe g�n� teslimat yap�lacak"); break;
		case 6:
			printf("Cuma g�n� teslimat yap�lacak"); break;
		case 7:
			printf("Cumartesi g�n� teslimat yap�lacak"); break;
	}
}
