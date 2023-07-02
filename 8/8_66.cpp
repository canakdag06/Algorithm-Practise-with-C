#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int sayi,onlar,birler,direnc=0;
	printf("Sayýyý giriniz = ");
	scanf("%d",&sayi);
	
	while(sayi<10 || sayi>99)
	{
		printf("Yanlýþ!!! Lütfen 2 basamaklý giriniz = ");
		scanf("%d",&sayi);
	}
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
	printf("Çarpým direnci = %d",direnc);

return 0;
}
