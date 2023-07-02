#include<stdio.h>

int main()
{
	int sayi,binler,yuzler,onlar,birler;
	printf("Dort basamakli sayiyi giriniz : ");
	scanf("%d",&sayi);
	
		if(sayi<1000 || sayi>9999)
		{
		printf("HATA! Uygun bir sayi girmediniz.");
		return 0;
		}
	
	printf("-----------------------------------");
	
	binler = sayi/1000;
	yuzler = (sayi%1000)/100;
	onlar = (sayi%100)/10;
	birler = (sayi%10);
	
	int check = (binler*10 + yuzler) + (onlar*10 + birler);
	
		if(check*check == sayi)
		printf("\nGirilen sayi Yarimkare bir sayidir.");
		else
		printf("\nGirilen sayi Yarimkare bir sayi degildir.");
	return 0;
	
	
}
