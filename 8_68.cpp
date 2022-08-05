#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int sayi,onlar,birler,direnc;
	
	for(int i=10;i<100;i++)
	{
		direnc=0;
		sayi = i;
		onlar = sayi/10;
		birler = sayi%10;
		do
		{
			sayi = onlar*birler;
			onlar = sayi/10;
			birler = sayi%10;
			direnc++; 
		}
		while(sayi>9);
		
		printf("%d sayýsýnýn çarpým direnci = %d\n",i,direnc);
	}
return 0;
}
