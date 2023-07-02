#include<stdio.h>
long int terscevir(int);

int main()		// Algoritmayý tasarimkodlama.com'dan aldým.
{
	printf("%ld \n", terscevir(123));
	printf("%ld", terscevir(123456));
return 0;
}

long int terscevir(int sayi)
{
	int ters = 0;
	
	while (sayi != 0)
	{
		ters = ters * 10;
		ters = ters + sayi%10;
		sayi = sayi/10;
	}
	return ters;
}
