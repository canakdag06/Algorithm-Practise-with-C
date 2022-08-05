#include<stdio.h>
#include<locale.h>
#include<math.h>

int rakamsay(int);

int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Bir tamsayý giriniz: ");
	scanf("%d",&sayi);
	printf("%d",rakamsay(sayi));
return 0;
}

int rakamsay(int sayi)
{
	int basamak=0;
		while(sayi!=0)
		{
			sayi=sayi/10;
			basamak++;
		}
return basamak;
}
