#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int sayi,onlar,birler,direnc=0;
	printf("Say�y� giriniz = ");
	scanf("%d",&sayi);
	
	while(sayi<10 || sayi>99)
	{
		printf("Yanl��!!! L�tfen 2 basamakl� giriniz = ");
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
	printf("�arp�m direnci = %d",direnc);

return 0;
}
