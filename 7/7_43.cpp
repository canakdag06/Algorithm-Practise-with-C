#include<stdio.h>
#include<locale.h>
int main()
{
	int sayi;
	setlocale(LC_ALL, "Turkish");
	printf("Say�y� giriniz (3 basamakl�): ");
	scanf("%d",&sayi);
	printf("-----------------------------");
	
	int yuzler = sayi/100;
	int onlar = (sayi%100)/10;
	int birler = sayi%10;
	
	if(yuzler>onlar && yuzler>birler)
		printf("\nSay�n�n en b�y�k rakam� sa�dan 3. rakamd�r.");
	else if(onlar>yuzler && onlar>birler)
		printf("\nSay�n�n en b�y�k rakam� sa�dan 2. rakamd�r.");
	else if(birler>onlar && birler>yuzler)
		printf("\nSay�n�n en b�y�k rakam� sa�dan 1. rakamd�r.");
	else
		printf("\nHATA! Say�lar ayn� olamaz.");
return 0;
}
