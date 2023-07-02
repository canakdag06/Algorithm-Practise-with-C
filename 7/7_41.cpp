#include<stdio.h>

int main()
{
	int sayi,yuzler,onlar,birler;
	int cift = 0;
	printf("Sayiyi giriniz (3 basamakli): ");
	scanf("%d",&sayi);
	printf("-----------------------------");
	
	if(sayi<100 || sayi>999)
	{
		printf("\nHATA! Girdiginiz sayi 3 basamakli degil.");
		return 0;
	}
	
	yuzler = sayi/100;
	onlar = (sayi%100)/10;
	birler = sayi%10;
	
	if(yuzler%2 == 0)
	cift = cift+1;
	if(onlar%2 == 0)
	cift = cift+1;
	if(birler%2 == 0)
	cift = cift+1;
	
	printf("\nSayida %d tane cift rakam vardir.",cift);
return 0;
}
