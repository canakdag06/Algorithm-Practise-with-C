#include<stdio.h>

int main()
{
	int sayi,binler,yuzler,onlar,birler;
	printf("Sayiyi giriniz : ");
	scanf("%d",&sayi);
	
		if(sayi<1000 || sayi>9999)
		{
			printf("HATA! Sayi 4 basamakli olmalidir.");
			return 0;
		}
		
	printf("------------------");
	
	binler = sayi/1000;
	yuzler = (sayi%1000)/100;
	onlar = (sayi%100)/10;
	birler = (sayi%10);
	int check = binler + yuzler + onlar + birler;
	
		if(check*check*check == sayi)
		printf("\nGirilen %d sayisi kupunu dolduran sayidir.",sayi);
		else
		printf("\nGirilen %d sayisi kupunu dolduran sayi degildir.",sayi);
	return 0;
}
