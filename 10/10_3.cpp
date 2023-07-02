#include<stdio.h>
int cevir(int);

int main()
{
	cevir(13);
}

int cevir(int sayi)
{
	if(sayi>1)
		cevir(sayi/2);
	printf("%d", sayi%2);
}
