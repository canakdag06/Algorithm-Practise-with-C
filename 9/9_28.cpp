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
			printf("Bu iþin arkasýnda kapitalist Amerika var!"); break;
		case 2:
			printf("Bu Allahsýz Japonlar yok mu hep onlarýn suçu!"); break;
		case 3:
			printf("Bu iþin arkasýnda Ýspanya var!"); break;
		case 4:
			printf("Bu Fransa yok mu ah bu Fransa!"); break;
		case 5:
			printf("Putin bizi kýskanýyor! Bu iþin arkasýnda da Rusya var."); break;
		case 6:
			printf("Sayýn milletim, Katar'la olan dostluðumuzu herkes bilir ama bu hareketleri hiç olmadý"); break;
		case 7:
			printf("Eyyy Almanya! Yav bu Almanya bizi kýskanýyor."); break;
		case 8:
			printf("Yav Ýngiltere iþine baksýn. Londra çöpten geçilmiyor!"); break;
		case 9:
			printf("Bu iþin arkasýnda Çin var!"); break;
		case 10:
			printf("Bu ülkenin baþýna ne geliyorsa hep ülkemiz içindeki teröristler yüzünden!"); break;
	}
}
