#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");		// Sorudaki �r�nt�ye dikkat et. A dizisindeki say�lar� C'deki 2 kat�ndaki indekse,
										// B dizisindeki say�lar C'deki 2kat�n�n 1 fazlas�na at�l�yor.
	float a[6], b[6], c[12];
	
	printf("a dizisinin elemanlar�n� giriniz: ");
	for(int i=0; i<6; i++)
	{
		scanf("%f",&a[i]);
		c[2*i] = a[i];
	}
	
	printf("b dizisinin elemanlar�n� giriniz: ");
	for(int i=0; i<6; i++)
	{
		scanf("%f",&b[i]);
		c[2*i+1] = b[i];
	}
	
	printf("c dizisinin elemanlar�:\n");
	for(int i=0; i<12; i++)
	{
		printf("%.1f ", c[i]);
	}
}
