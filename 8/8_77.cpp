#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayac = 1;
	long int toplam = 0;
	long int ktoplam = 0;
	
	printf("\n\n------------------------------------\n");
	while( sayac < 10 ) {
		printf("%d say�s�n�n karesi %d dir\n",
			sayac, sayac * sayac);
		toplam = toplam + sayac;
		ktoplam = ktoplam + sayac * sayac;
		sayac = sayac + 2;
	}
	printf("+---------------------------------------\n");
	printf("Say� toplam� = %ld, karelerinin toplam�= %ld",
		toplam, ktoplam);
return 0;
}
