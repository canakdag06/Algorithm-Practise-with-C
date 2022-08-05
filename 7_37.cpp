#include<stdio.h>
#include<locale.h>

int main()
{
	float kilo,boy;
	char cinsiyet;
	printf("Kilo(kg), boy(m), ve cinsiyet (E/e, K,k) gir: ");
	scanf("%f %f %c",&kilo,&boy,&cinsiyet);
	printf("---------------------------------------------");
	float vki = kilo/(boy*boy);
	
	if(cinsiyet == 'E' || cinsiyet == 'e')
	{
		if(vki<20.7)
		{printf("\nVucut kitle indeksi = %.2f \nZayifsiniz. Saglik riski!",vki);}
		else if(vki>=20.7 && vki<=26.4)
		{printf("\nVucut kitle indeksi = %.2f \nNormalsiniz. Risk yoktur.",vki);}
		else if(vki>=26.5 && vki<=31.1)
		{printf("\nVucut kitle indeksi = %.2f \nSismanlik sinirinda ya da sismansiniz. Riskli.",vki);}
		else if(vki>=31.2)
		{printf("\nVucut kitle indeksi = %.2f \nObezite. Ciddi derecede riskli.",vki);}
	}
	
	if(cinsiyet == 'K' || cinsiyet == 'k')
	{
		if(vki<19.1)
		{printf("\nVucut kitle indeksi = %.2f \nZayifsiniz. Saglik riski!",vki);}
		else if(vki>=19.1 && vki<=25.8)
		{printf("\nVucut kitle indeksi = %.2f \nNormalsiniz. Risk yoktur.",vki);}
		else if(vki>=25.9 && vki<=32.2)
		{printf("\nVucut kitle indeksi = %.2f \nSismanlik sinirinda ya da sismansiniz. Riskli.",vki);}
		else if(vki>=32.3)
		{printf("\nVucut kitle indeksi = %.2f \nObezite. Ciddi derecede riskli.",vki);}
	}
return 0;
}
