#include<stdio.h>
#include<locale.h>

int main()
{
	float alan = 0;
	int a,n;
	setlocale(LC_ALL, "Turkish");
	printf("Kenar uzunluklar� her defas�nda yar�ya inen a kenar uzunluklu\n");
	printf("karelerden n tanesinin toplam alan�n� bulan algoritma i�in:\na ve n de�erlerini giriniz: ");
	scanf("%d %d",&a,&n);
	
	while(n>0)
	{
		alan = alan + a*a;
		a= a/2;
		n--;
	}
	printf("\nToplam alan = %.2f",alan);
return 0;
}
