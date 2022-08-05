#include<stdio.h>
#include<locale.h>
#include<math.h>

int rakamtopla(int);

int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Bir tamsayý giriniz: ");
	scanf("%d",&sayi);
	printf("%d",rakamtopla(sayi));
return 0;
}

int rakamtopla(int sayi)
{
	int toplam = 0;
		while(sayi!=0)
		{
			toplam = toplam+(sayi%10);
			sayi = sayi/10;
		}
return toplam;
}
