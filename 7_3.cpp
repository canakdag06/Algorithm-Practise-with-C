#include<stdio.h>

int main()
{
	int sayi, onbinler, binler, yuzler, onlar, birler;
	printf("5 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	
		if(sayi<10000 || sayi>99999)
		{
			printf("HATA! Lutfen 5 basamakli bir sayi giriniz.");
			return 0;
		}
	printf("-------------------------------");
	onbinler= sayi/10000;
	binler= (sayi%10000)/1000;
	yuzler= (sayi%1000)/100;
	onlar= (sayi%100)/10;
	birler= sayi%10;
	
	if(onbinler==birler && binler==onlar)
		printf("\nGirilen %d sayisi palindrome sayidir.",sayi);
	else
		printf("\nGirilen %d sayisi palindrome sayi degildir.",sayi);
	return 0;
}
