#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int sayi,onlar,birler,direnc,max_direnc=1,max_sayi;
	
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
			if(direnc>max_direnc)
			{
				max_direnc = direnc;
				max_sayi = i;
			}
		}
		while(sayi>9);
	}
	printf("Çarpým direnci en büyük olan sayý= %d (Çarpým direnci = %d)",max_sayi,max_direnc);
return 0;
}
