#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>

void bahaneYaz(int);
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	bahaneYaz(1);
	printf("\n");
	bahaneYaz(6);
return 0;
}

void bahaneYaz(int ulke)
{
	int degistir = 1+rand()%9;
	do
	{
		degistir = 1+rand()%9;
	}
	while(ulke == degistir);
	
	switch(degistir)
	{
		case 1:
			printf("Bu i�in arkas�nda kapitalist Amerika var!"); break;
		case 2:
			printf("Bu Allahs�z Japonlar yok mu hep onlar�n su�u!"); break;
		case 3:
			printf("Bu i�in arkas�nda �spanya var!"); break;
		case 4:
			printf("Bu Fransa yok mu ah bu Fransa!"); break;
		case 5:
			printf("Putin bizi k�skan�yor! Bu i�in arkas�nda da Rusya var."); break;
		case 6:
			printf("Say�n milletim, Katar'la olan dostlu�umuzu herkes bilir ama bu hareketleri hi� olmad�"); break;
		case 7:
			printf("Eyyy Almanya! Yav bu Almanya bizi k�skan�yor."); break;
		case 8:
			printf("Yav �ngiltere i�ine baks�n. Londra ��pten ge�ilmiyor!"); break;
		case 9:
			printf("Bu i�in arkas�nda �in var!"); break;
		case 10:
			printf("Bu �lkenin ba��na ne geliyorsa hep �lkemiz i�indeki ter�ristler y�z�nden!"); break;
	}
}
