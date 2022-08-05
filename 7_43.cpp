#include<stdio.h>
#include<locale.h>
int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Sayýyý giriniz (3 basamaklý): ");
	scanf("%d",&sayi);
	printf("-----------------------------");
	
	int yuzler = sayi/100;
	int onlar = (sayi%100)/10;
	int birler = sayi%10;
	
	if(yuzler>onlar && yuzler>birler)
		printf("\nSayýnýn en büyük rakamý saðdan 3. rakamdýr.");
	else if(onlar>yuzler && onlar>birler)
		printf("\nSayýnýn en büyük rakamý saðdan 2. rakamdýr.");
	else if(birler>onlar && birler>yuzler)
		printf("\nSayýnýn en büyük rakamý saðdan 1. rakamdýr.");
	else
		printf("\nHATA! Sayýlar ayný olamaz.");
return 0;
}
